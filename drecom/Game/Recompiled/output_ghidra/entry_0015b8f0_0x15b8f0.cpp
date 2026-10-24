#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0015b8f0
// Address: 0x15b8f0 - 0x15ba08
void entry_0015b8f0_0x15b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b8f0_0x15b8f0");
#endif

    switch (ctx->pc) {
        case 0x15b910u: goto label_15b910;
        case 0x15b95cu: goto label_15b95c;
        case 0x15b968u: goto label_15b968;
        case 0x15b9a0u: goto label_15b9a0;
        case 0x15b9acu: goto label_15b9ac;
        default: break;
    }

    ctx->pc = 0x15b8f0u;

    // 0x15b8f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b8f4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b8f8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15b8fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15b900: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x15B900u;
    {
        const bool branch_taken_0x15b900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b900) {
            ctx->pc = 0x15BA44u;
            return;
        }
    }
    ctx->pc = 0x15B908u;
    // 0x15b908: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15B908u;
    SET_GPR_U32(ctx, 31, 0x15B910u);
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x15B908u, 0x15B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B910u;
label_15b910:
    // 0x15b910: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x15B910u;
    {
        const bool branch_taken_0x15b910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b910) {
            ctx->pc = 0x15BA44u;
            return;
        }
    }
    ctx->pc = 0x15B918u;
    // 0x15b918: 0x8e0313e8  lw          $v1, 0x13E8($s0)
    ctx->pc = 0x15b918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b91c: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b920: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x15B920u;
    {
        const bool branch_taken_0x15b920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b920) {
            ctx->pc = 0x15BA44u;
            return;
        }
    }
    ctx->pc = 0x15B928u;
    // 0x15b928: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x15b928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15b92c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b930: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x15b930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x15b934: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b938: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b93c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b940: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15b944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b948: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b94c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x15b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15b950: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x15b950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b954: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15B954u;
    SET_GPR_U32(ctx, 31, 0x15B95Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15B954u, 0x15B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B95Cu;
label_15b95c:
    // 0x15b95c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b960: 0xc067588  jal         func_19D620
    ctx->pc = 0x15B960u;
    SET_GPR_U32(ctx, 31, 0x15B968u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15B960u, 0x15B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B968u;
label_15b968:
    // 0x15b968: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15b968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15b96c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15b970: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b974: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x15b974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x15b978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b97c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b980: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b984: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15b988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b98c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b990: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x15b990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15b994: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x15b994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b998: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15B998u;
    SET_GPR_U32(ctx, 31, 0x15B9A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15B998u, 0x15B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9A0u;
label_15b9a0:
    // 0x15b9a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b9a4: 0xc067588  jal         func_19D620
    ctx->pc = 0x15B9A4u;
    SET_GPR_U32(ctx, 31, 0x15B9ACu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15B9A4u, 0x15B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9ACu;
label_15b9ac:
    // 0x15b9ac: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x15b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x15b9b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b9b4: 0x0  nop
    ctx->pc = 0x15b9b4u;
    // NOP
    // 0x15b9b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15b9b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15b9bc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15b9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x15b9c0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x15b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b9c4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x15b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b9c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15b9c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b9cc: 0x0  nop
    ctx->pc = 0x15b9ccu;
    // NOP
    // 0x15b9d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x15B9D0u;
    {
        const bool branch_taken_0x15b9d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b9d0) {
            ctx->pc = 0x15BA08u;
            return;
        }
    }
    ctx->pc = 0x15B9D8u;
    // 0x15b9d8: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b9dc: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x15b9dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x15b9e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b9e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b9e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b9e8: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15B9E8u;
    {
        const bool branch_taken_0x15b9e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15b9e8) {
            ctx->pc = 0x15BA44u;
            return;
        }
    }
    ctx->pc = 0x15B9F0u;
    // 0x15b9f0: 0x86021574  lh          $v0, 0x1574($s0)
    ctx->pc = 0x15b9f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5492)));
    // 0x15b9f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b9f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b9f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b9fc: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x15b9fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x15ba00: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BA00u;
    {
        const bool branch_taken_0x15ba00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ba00) {
            ctx->pc = 0x15BA44u;
            return;
        }
    }
    ctx->pc = 0x15BA08u;
}
