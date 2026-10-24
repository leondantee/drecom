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
// Address: 0x3497bc - 0x349864
void caseD_0_0x3497bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x3497bc");
#endif

    switch (ctx->pc) {
        case 0x3497e8u: goto label_3497e8;
        default: break;
    }

    ctx->pc = 0x3497bcu;

    // 0x3497bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3497bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3497c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3497c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3497c4: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x3497c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3497c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3497c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3497cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3497ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3497d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3497d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3497d4: 0x24060f0e  addiu       $a2, $zero, 0xF0E
    ctx->pc = 0x3497d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3854));
    // 0x3497d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3497d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3497dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3497dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3497e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3497E0u;
    SET_GPR_U32(ctx, 31, 0x3497E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3497E0u, 0x3497E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497E8u;
label_3497e8:
    // 0x3497e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3497e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3497ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3497ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3497f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3497f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3497f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3497f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3497f8: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x3497f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3497fc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3497fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x349800: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x349800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x349804: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349808: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x349808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34980c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349810: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x349810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x349814: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x349814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x349818: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x349818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34981c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349820: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x349820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x349824: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x349824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x349828: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x349828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x34982c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34982cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349830: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349834: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x349834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349838: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x349838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34983c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34983cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x349840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349848: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34984c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34984cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x349850: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x349850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349854: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x349854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x349858: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x349858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34985c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x34985cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x349860: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x349860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x349864u;
}
