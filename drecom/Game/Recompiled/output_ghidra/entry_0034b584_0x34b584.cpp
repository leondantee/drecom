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

// Function: entry_0034b584
// Address: 0x34b584 - 0x34b614
void entry_0034b584_0x34b584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b584_0x34b584");
#endif

    switch (ctx->pc) {
        case 0x34b5b0u: goto label_34b5b0;
        default: break;
    }

    ctx->pc = 0x34b584u;

    // 0x34b584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b588: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b58c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b58cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b590: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b594: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b598: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b59c: 0x24060f0d  addiu       $a2, $zero, 0xF0D
    ctx->pc = 0x34b59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3853));
    // 0x34b5a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b5a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b5a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B5A8u;
    SET_GPR_U32(ctx, 31, 0x34B5B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B5A8u, 0x34B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5B0u;
label_34b5b0:
    // 0x34b5b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b5b4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b5b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34b5bc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34b5c0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34b5c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b5c8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34b5cc: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34b5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34b5d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34b5d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34b5d8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b5dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34b5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34b5e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34b5e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b5e8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b5ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34b5f0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x34b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x34b5f4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34b5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b5fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b600: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b604: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34b604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34b608: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x34b608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34b60c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b610: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x34b610u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x34b614u;
}
