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

// Function: entry_0034b7cc
// Address: 0x34b7cc - 0x34b858
void entry_0034b7cc_0x34b7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b7cc_0x34b7cc");
#endif

    switch (ctx->pc) {
        case 0x34b7f8u: goto label_34b7f8;
        default: break;
    }

    ctx->pc = 0x34b7ccu;

    // 0x34b7cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b7d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b7d4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34b7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b7d8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b7dc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b7e0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34b7e4: 0x24060f2d  addiu       $a2, $zero, 0xF2D
    ctx->pc = 0x34b7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3885));
    // 0x34b7e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b7ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b7f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B7F0u;
    SET_GPR_U32(ctx, 31, 0x34B7F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B7F0u, 0x34B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7F8u;
label_34b7f8:
    // 0x34b7f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34b7f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b7fc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b800: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34b800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b804: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34b808: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34b808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34b80c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x34b810: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b814: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34b818: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34b818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34b81c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34b820: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34b820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34b824: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b828: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34b828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34b82c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x34b830: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b834: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x34b834u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x34b838: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b83c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34b840: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34b840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b844: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x34b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b848: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34b848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34b84c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b850: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34b850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34b854: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x34b858u;
}
