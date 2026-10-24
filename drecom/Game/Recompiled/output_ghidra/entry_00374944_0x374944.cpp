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

// Function: entry_00374944
// Address: 0x374944 - 0x3749f0
void entry_00374944_0x374944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374944_0x374944");
#endif

    switch (ctx->pc) {
        case 0x37496cu: goto label_37496c;
        case 0x374980u: goto label_374980;
        case 0x3749c8u: goto label_3749c8;
        default: break;
    }

    ctx->pc = 0x374944u;

    // 0x374944: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x374944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x374948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37494c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x374950: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x374950u;
    {
        const bool branch_taken_0x374950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374950) {
            ctx->pc = 0x3749F0u;
            return;
        }
    }
    ctx->pc = 0x374958u;
    // 0x374958: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37495c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x37495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374960: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x374960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x374964: 0xc040c9e  jal         func_103278
    ctx->pc = 0x374964u;
    SET_GPR_U32(ctx, 31, 0x37496Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x37496Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37496Cu) { return; }
    ctx->pc = 0x37496Cu;
label_37496c:
    // 0x37496c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x37496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374970: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374974: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x374974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x374978: 0xc040c9e  jal         func_103278
    ctx->pc = 0x374978u;
    SET_GPR_U32(ctx, 31, 0x374980u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x374980u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374980u) { return; }
    ctx->pc = 0x374980u;
label_374980:
    // 0x374980: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x374980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374984: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x374984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x374988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37498c: 0x0  nop
    ctx->pc = 0x37498cu;
    // NOP
    // 0x374990: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x374990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x374994: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x374994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x374998: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x374998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37499c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x3749a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3749a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3749a4: 0x0  nop
    ctx->pc = 0x3749a4u;
    // NOP
    // 0x3749a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3749a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3749ac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3749acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3749b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3749b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3749b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3749b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3749b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3749b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3749bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3749bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3749c0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x3749C0u;
    SET_GPR_U32(ctx, 31, 0x3749C8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x3749C0u, 0x3749C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3749C8u;
label_3749c8:
    // 0x3749c8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3749c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3749cc: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x3749ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x3749d0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x3749d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x3749d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3749d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3749d8: 0x0  nop
    ctx->pc = 0x3749d8u;
    // NOP
    // 0x3749dc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3749dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3749e0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3749E0u;
    {
        const bool branch_taken_0x3749e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3749e0) {
            ctx->pc = 0x3749F0u;
            return;
        }
    }
    ctx->pc = 0x3749E8u;
    // 0x3749e8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3749e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3749ec: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3749ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x3749f0u;
}
