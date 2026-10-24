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

// Function: entry_00226d98
// Address: 0x226d98 - 0x226e40
void entry_00226d98_0x226d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226d98_0x226d98");
#endif

    ctx->pc = 0x226d98u;

    // 0x226d98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226d9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226da0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226da4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x226da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x226da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226dac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226db0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226db4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x226db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x226db8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226dbc: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x226dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x226dc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x226dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x226dc4: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x226dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x226dc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x226dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x226dcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x226dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x226dd0: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x226dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x226dd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226dd8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x226dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226ddc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x226ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x226de0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x226de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x226de4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x226de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x226de8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x226de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x226dec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226df0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226df4: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x226df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x226df8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x226df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x226dfc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x226dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x226e00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x226E00u;
    {
        const bool branch_taken_0x226e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226e00) {
            ctx->pc = 0x226E40u;
            return;
        }
    }
    ctx->pc = 0x226E08u;
    // 0x226e08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e0c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x226e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226e10: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x226e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x226e14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226e18: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x226e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226e1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x226e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x226e20: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x226e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x226e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e28: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x226e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226e2c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x226e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x226e30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226e34: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x226e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226e38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x226e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x226e3c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x226e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x226e40u;
}
