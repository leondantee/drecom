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

// Function: entry_00247898
// Address: 0x247898 - 0x247914
void entry_00247898_0x247898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247898_0x247898");
#endif

    switch (ctx->pc) {
        case 0x2478d8u: goto label_2478d8;
        case 0x24790cu: goto label_24790c;
        default: break;
    }

    ctx->pc = 0x247898u;

    // 0x247898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24789c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x24789cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2478a0: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x2478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x2478a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2478a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2478a8: 0x0  nop
    ctx->pc = 0x2478a8u;
    // NOP
    // 0x2478ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2478acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2478b0: 0x0  nop
    ctx->pc = 0x2478b0u;
    // NOP
    // 0x2478b4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2478B4u;
    {
        const bool branch_taken_0x2478b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2478b4) {
            ctx->pc = 0x247938u;
            return;
        }
    }
    ctx->pc = 0x2478BCu;
    // 0x2478bc: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2478bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2478c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2478c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2478c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2478c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2478c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2478cc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2478ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2478d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2478D0u;
    SET_GPR_U32(ctx, 31, 0x2478D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2478D0u, 0x2478D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478D8u;
label_2478d8:
    // 0x2478d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2478d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2478dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2478dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2478e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2478E0u;
    {
        const bool branch_taken_0x2478e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2478e0) {
            ctx->pc = 0x247914u;
            return;
        }
    }
    ctx->pc = 0x2478E8u;
    // 0x2478e8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2478e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2478ec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2478ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2478f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2478f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2478f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2478f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2478f8: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x2478f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x2478fc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2478fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x247900: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x247900u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247904: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x247904u;
    SET_GPR_U32(ctx, 31, 0x24790Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x247904u, 0x24790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24790Cu;
label_24790c:
    // 0x24790c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24790Cu;
    {
        const bool branch_taken_0x24790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24790c) {
            ctx->pc = 0x247938u;
            return;
        }
    }
    ctx->pc = 0x247914u;
}
