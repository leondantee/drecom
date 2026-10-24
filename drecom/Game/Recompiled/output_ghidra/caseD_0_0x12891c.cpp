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

// Function: caseD_0
// Address: 0x12891c - 0x1289c0
void caseD_0_0x12891c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12891c");
#endif

    switch (ctx->pc) {
        case 0x12892cu: goto label_12892c;
        default: break;
    }

    ctx->pc = 0x12891cu;

    // 0x12891c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128924: 0xc05d25c  jal         func_174970
    ctx->pc = 0x128924u;
    SET_GPR_U32(ctx, 31, 0x12892Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128924u, 0x12892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12892Cu;
label_12892c:
    // 0x12892c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12892Cu;
    {
        const bool branch_taken_0x12892c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12892c) {
            ctx->pc = 0x1289C0u;
            return;
        }
    }
    ctx->pc = 0x128934u;
    // 0x128934: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128938: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12893c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12893cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x128940: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128944: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x128948: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x128948u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12894c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12894cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x128950: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128954: 0x0  nop
    ctx->pc = 0x128954u;
    // NOP
    // 0x128958: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x128958u;
    {
        const bool branch_taken_0x128958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128958) {
            ctx->pc = 0x1289C0u;
            return;
        }
    }
    ctx->pc = 0x128960u;
    // 0x128960: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128964: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128968: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12896c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x12896cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128970: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x128974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128978: 0x0  nop
    ctx->pc = 0x128978u;
    // NOP
    // 0x12897c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12897cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128980: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128984: 0x0  nop
    ctx->pc = 0x128984u;
    // NOP
    // 0x128988: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x128988u;
    {
        const bool branch_taken_0x128988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128988) {
            ctx->pc = 0x1289C0u;
            return;
        }
    }
    ctx->pc = 0x128990u;
    // 0x128990: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128994: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128998: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12899c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1289a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1289a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1289a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1289a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1289ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1289acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1289b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1289b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1289b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1289b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1289bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1289bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1289c0u;
}
