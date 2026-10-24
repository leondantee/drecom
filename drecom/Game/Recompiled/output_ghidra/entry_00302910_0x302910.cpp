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

// Function: entry_00302910
// Address: 0x302910 - 0x30299c
void entry_00302910_0x302910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302910_0x302910");
#endif

    switch (ctx->pc) {
        case 0x302964u: goto label_302964;
        default: break;
    }

    ctx->pc = 0x302910u;

    // 0x302910: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302914: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302918: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x302918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
    // 0x30291c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30291cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302920: 0x0  nop
    ctx->pc = 0x302920u;
    // NOP
    // 0x302924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302928: 0x0  nop
    ctx->pc = 0x302928u;
    // NOP
    // 0x30292c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30292Cu;
    {
        const bool branch_taken_0x30292c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30292c) {
            ctx->pc = 0x30299Cu;
            return;
        }
    }
    ctx->pc = 0x302934u;
    // 0x302934: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x302934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x302938: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x302938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x30293c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30293cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302940: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302944: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x302944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302948: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30294c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x302950: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x302950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302954: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302958: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30295c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30295Cu;
    SET_GPR_U32(ctx, 31, 0x302964u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30295Cu, 0x302964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302964u;
label_302964:
    // 0x302964: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302964u;
    {
        const bool branch_taken_0x302964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302964) {
            ctx->pc = 0x30299Cu;
            return;
        }
    }
    ctx->pc = 0x30296Cu;
    // 0x30296c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302970: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302974: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302978: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x302978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30297c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30297cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302980: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302984: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302988: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30298c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302990: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302994: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302998: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30299cu;
}
