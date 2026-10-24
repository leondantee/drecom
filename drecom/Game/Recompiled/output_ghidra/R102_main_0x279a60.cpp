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

// Function: R102_main
// Address: 0x279a60 - 0x279cec
void R102_main_0x279a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R102_main_0x279a60");
#endif

    switch (ctx->pc) {
        case 0x279ac8u: goto label_279ac8;
        case 0x279ad8u: goto label_279ad8;
        case 0x279ae8u: goto label_279ae8;
        case 0x279af8u: goto label_279af8;
        case 0x279b08u: goto label_279b08;
        case 0x279b18u: goto label_279b18;
        case 0x279b28u: goto label_279b28;
        case 0x279b38u: goto label_279b38;
        case 0x279b48u: goto label_279b48;
        case 0x279ba4u: goto label_279ba4;
        case 0x279bb4u: goto label_279bb4;
        case 0x279bc4u: goto label_279bc4;
        case 0x279bd4u: goto label_279bd4;
        case 0x279be4u: goto label_279be4;
        case 0x279bf4u: goto label_279bf4;
        case 0x279c04u: goto label_279c04;
        case 0x279c14u: goto label_279c14;
        case 0x279c24u: goto label_279c24;
        case 0x279c5cu: goto label_279c5c;
        case 0x279c6cu: goto label_279c6c;
        case 0x279c7cu: goto label_279c7c;
        case 0x279c8cu: goto label_279c8c;
        case 0x279c9cu: goto label_279c9c;
        case 0x279cacu: goto label_279cac;
        case 0x279cbcu: goto label_279cbc;
        case 0x279cccu: goto label_279ccc;
        case 0x279cdcu: goto label_279cdc;
        default: break;
    }

    ctx->pc = 0x279a60u;

    // 0x279a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279a64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x279a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x279a68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x279a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x279a6c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x279a6cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279a70: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x279a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x279a74: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x279a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279a78: 0x3c0345a5  lui         $v1, 0x45A5
    ctx->pc = 0x279a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17829 << 16));
    // 0x279a7c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x279a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x279a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x279a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279a84: 0x0  nop
    ctx->pc = 0x279a84u;
    // NOP
    // 0x279a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x279a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279a8c: 0x0  nop
    ctx->pc = 0x279a8cu;
    // NOP
    // 0x279a90: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x279A90u;
    {
        const bool branch_taken_0x279a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279a90) {
            ctx->pc = 0x279B50u;
            goto label_279b50;
        }
    }
    ctx->pc = 0x279A98u;
    // 0x279a98: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279a9c: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x279a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621AA0u));
    // 0x279aa0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x279aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279aa4: 0x1083008d  beq         $a0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x279AA4u;
    {
        const bool branch_taken_0x279aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279aa4) {
            ctx->pc = 0x279CDCu;
            goto label_279cdc;
        }
    }
    ctx->pc = 0x279AACu;
    // 0x279aac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x279aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279ab0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279ab4: 0xac221aa0  sw          $v0, 0x1AA0($at)
    ctx->pc = 0x279ab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AA0u, _value); } while (0);
    // 0x279ab8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279abc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279abcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279ac0: 0xc050018  jal         func_140060
    ctx->pc = 0x279AC0u;
    SET_GPR_U32(ctx, 31, 0x279AC8u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279AC0u, 0x279AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AC8u;
label_279ac8:
    // 0x279ac8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279acc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279ad0: 0xc050018  jal         func_140060
    ctx->pc = 0x279AD0u;
    SET_GPR_U32(ctx, 31, 0x279AD8u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279AD0u, 0x279AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AD8u;
label_279ad8:
    // 0x279ad8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279ae0: 0xc050018  jal         func_140060
    ctx->pc = 0x279AE0u;
    SET_GPR_U32(ctx, 31, 0x279AE8u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279AE0u, 0x279AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AE8u;
label_279ae8:
    // 0x279ae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279aec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279aecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279af0: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279AF0u;
    SET_GPR_U32(ctx, 31, 0x279AF8u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279AF0u, 0x279AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AF8u;
label_279af8:
    // 0x279af8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279afc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279b00: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279B00u;
    SET_GPR_U32(ctx, 31, 0x279B08u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279B00u, 0x279B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B08u;
label_279b08:
    // 0x279b08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279b0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279b10: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279B10u;
    SET_GPR_U32(ctx, 31, 0x279B18u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279B10u, 0x279B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B18u;
label_279b18:
    // 0x279b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279b1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279b20: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279B20u;
    SET_GPR_U32(ctx, 31, 0x279B28u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279B20u, 0x279B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B28u;
label_279b28:
    // 0x279b28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279b30: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279B30u;
    SET_GPR_U32(ctx, 31, 0x279B38u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279B30u, 0x279B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B38u;
label_279b38:
    // 0x279b38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279b40: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279B40u;
    SET_GPR_U32(ctx, 31, 0x279B48u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279B40u, 0x279B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B48u;
label_279b48:
    // 0x279b48: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x279B48u;
    {
        const bool branch_taken_0x279b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279b48) {
            ctx->pc = 0x279CDCu;
            goto label_279cdc;
        }
    }
    ctx->pc = 0x279B50u;
label_279b50:
    // 0x279b50: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x279b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279b54: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x279b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x279b58: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x279b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x279b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x279b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279b60: 0x0  nop
    ctx->pc = 0x279b60u;
    // NOP
    // 0x279b64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x279b64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279b68: 0x0  nop
    ctx->pc = 0x279b68u;
    // NOP
    // 0x279b6c: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x279B6Cu;
    {
        const bool branch_taken_0x279b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279b6c) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279B74u;
    // 0x279b74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279b78: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x279b78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621AA0u));
    // 0x279b7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x279b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279b80: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x279B80u;
    {
        const bool branch_taken_0x279b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279b80) {
            ctx->pc = 0x279CDCu;
            goto label_279cdc;
        }
    }
    ctx->pc = 0x279B88u;
    // 0x279b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279b8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279b90: 0xac221aa0  sw          $v0, 0x1AA0($at)
    ctx->pc = 0x279b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AA0u, _value); } while (0);
    // 0x279b94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279b98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279b98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279b9c: 0xc050018  jal         func_140060
    ctx->pc = 0x279B9Cu;
    SET_GPR_U32(ctx, 31, 0x279BA4u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279B9Cu, 0x279BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BA4u;
label_279ba4:
    // 0x279ba4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279ba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bac: 0xc050018  jal         func_140060
    ctx->pc = 0x279BACu;
    SET_GPR_U32(ctx, 31, 0x279BB4u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279BACu, 0x279BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BB4u;
label_279bb4:
    // 0x279bb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279bb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279bb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279bbc: 0xc050018  jal         func_140060
    ctx->pc = 0x279BBCu;
    SET_GPR_U32(ctx, 31, 0x279BC4u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279BBCu, 0x279BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BC4u;
label_279bc4:
    // 0x279bc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279bcc: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279BCCu;
    SET_GPR_U32(ctx, 31, 0x279BD4u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279BCCu, 0x279BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BD4u;
label_279bd4:
    // 0x279bd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279bd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bdc: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279BDCu;
    SET_GPR_U32(ctx, 31, 0x279BE4u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279BDCu, 0x279BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BE4u;
label_279be4:
    // 0x279be4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279be8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279be8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279bec: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279BECu;
    SET_GPR_U32(ctx, 31, 0x279BF4u);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279BECu, 0x279BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BF4u;
label_279bf4:
    // 0x279bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279bf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279bf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279bfc: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279BFCu;
    SET_GPR_U32(ctx, 31, 0x279C04u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279BFCu, 0x279C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C04u;
label_279c04:
    // 0x279c04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279c08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c0c: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279C0Cu;
    SET_GPR_U32(ctx, 31, 0x279C14u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279C0Cu, 0x279C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C14u;
label_279c14:
    // 0x279c14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279c18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279c18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279c1c: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279C1Cu;
    SET_GPR_U32(ctx, 31, 0x279C24u);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279C1Cu, 0x279C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C24u;
label_279c24:
    // 0x279c24: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x279C24u;
    {
        const bool branch_taken_0x279c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279c24) {
            ctx->pc = 0x279CDCu;
            goto label_279cdc;
        }
    }
    ctx->pc = 0x279C2Cu;
label_279c2c:
    // 0x279c2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279c30: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x279c30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621AA0u));
    // 0x279c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c38: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x279C38u;
    {
        const bool branch_taken_0x279c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279c38) {
            ctx->pc = 0x279CDCu;
            goto label_279cdc;
        }
    }
    ctx->pc = 0x279C40u;
    // 0x279c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279c48: 0xac221aa0  sw          $v0, 0x1AA0($at)
    ctx->pc = 0x279c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AA0u, _value); } while (0);
    // 0x279c4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c54: 0xc050018  jal         func_140060
    ctx->pc = 0x279C54u;
    SET_GPR_U32(ctx, 31, 0x279C5Cu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279C54u, 0x279C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C5Cu;
label_279c5c:
    // 0x279c5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279c60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279c60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279c64: 0xc050018  jal         func_140060
    ctx->pc = 0x279C64u;
    SET_GPR_U32(ctx, 31, 0x279C6Cu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279C64u, 0x279C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C6Cu;
label_279c6c:
    // 0x279c6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279c70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279c74: 0xc050018  jal         func_140060
    ctx->pc = 0x279C74u;
    SET_GPR_U32(ctx, 31, 0x279C7Cu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279C74u, 0x279C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C7Cu;
label_279c7c:
    // 0x279c7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c84: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279C84u;
    SET_GPR_U32(ctx, 31, 0x279C8Cu);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279C84u, 0x279C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C8Cu;
label_279c8c:
    // 0x279c8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279c90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279c94: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279C94u;
    SET_GPR_U32(ctx, 31, 0x279C9Cu);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279C94u, 0x279C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C9Cu;
label_279c9c:
    // 0x279c9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279ca0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279ca4: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279CA4u;
    SET_GPR_U32(ctx, 31, 0x279CACu);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279CA4u, 0x279CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CACu;
label_279cac:
    // 0x279cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279cb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279cb4: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279CB4u;
    SET_GPR_U32(ctx, 31, 0x279CBCu);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279CB4u, 0x279CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CBCu;
label_279cbc:
    // 0x279cbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279cc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279cc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279cc4: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279CC4u;
    SET_GPR_U32(ctx, 31, 0x279CCCu);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279CC4u, 0x279CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CCCu;
label_279ccc:
    // 0x279ccc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279cd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279cd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279cd4: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279CD4u;
    SET_GPR_U32(ctx, 31, 0x279CDCu);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279CD4u, 0x279CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CDCu;
label_279cdc:
    // 0x279cdc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x279cdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279ce0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x279CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279CECu;
}
