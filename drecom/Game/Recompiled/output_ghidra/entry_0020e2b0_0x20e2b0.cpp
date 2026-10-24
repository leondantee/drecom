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

// Function: entry_0020e2b0
// Address: 0x20e2b0 - 0x20e360
void entry_0020e2b0_0x20e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e2b0_0x20e2b0");
#endif

    switch (ctx->pc) {
        case 0x20e300u: goto label_20e300;
        default: break;
    }

    ctx->pc = 0x20e2b0u;

    // 0x20e2b0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e2b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2b8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20e2bc: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x20e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x20e2c0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e2c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20e2cc: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x20e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    // 0x20e2d0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e2d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2d8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20e2dc: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x20e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x20e2e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20e2ec: 0x24066418  addiu       $a2, $zero, 0x6418
    ctx->pc = 0x20e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25624));
    // 0x20e2f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e2f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20e2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e2f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20E2F8u;
    SET_GPR_U32(ctx, 31, 0x20E300u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20E2F8u, 0x20E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E300u;
label_20e300:
    // 0x20e300: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e304: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20e304u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e308: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e30c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20e30cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e310: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e314: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x20e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x20e318: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x20e318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x20e31c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20e31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20e320: 0xac821340  sw          $v0, 0x1340($a0)
    ctx->pc = 0x20e320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 2));
    // 0x20e324: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e328: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x20e328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x20e32c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x20e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x20e330: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x20e330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e338: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e33c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x20e33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x20e340: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20e344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e348: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e34c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x20e34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x20e350: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e354: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20e354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e35c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20e35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20e360u;
}
