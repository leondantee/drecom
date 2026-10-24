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

// Function: entry_00346170
// Address: 0x346170 - 0x34622c
void entry_00346170_0x346170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346170_0x346170");
#endif

    switch (ctx->pc) {
        case 0x34619cu: goto label_34619c;
        default: break;
    }

    ctx->pc = 0x346170u;

    // 0x346170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x346170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346174: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346178: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x346178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34617c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346180: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346184: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x346184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x346188: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x346188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x34618c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34618cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x346190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x346194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x346194u;
    SET_GPR_U32(ctx, 31, 0x34619Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x346194u, 0x34619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34619Cu;
label_34619c:
    // 0x34619c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461a0: 0xa4801278  sh          $zero, 0x1278($a0)
    ctx->pc = 0x3461a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3461a4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461a8: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x3461a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3461ac: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x3461acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x3461b0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3461b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3461b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3461b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3461b8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3461b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3461bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3461bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3461c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3461c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3461c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461c8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3461c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3461cc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3461ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3461d0: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x3461d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3461d4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3461d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3461d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3461dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3461e0: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x3461e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3461e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3461e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3461e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461ec: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x3461ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3461f0: 0xa203006f  sb          $v1, 0x6F($s0)
    ctx->pc = 0x3461f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x3461f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3461f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3461f8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3461fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346200: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x346200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x346204: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346208: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x346208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34620c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346210: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x346210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x346214: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x346214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x346218: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34621c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346220: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x346220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346224: 0x34620020  ori         $v0, $v1, 0x20
    ctx->pc = 0x346224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x346228: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x346228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x34622cu;
}
