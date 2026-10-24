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

// Function: caseD_2
// Address: 0x1bdaf0 - 0x1bdb68
void caseD_2_0x1bdaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1bdaf0");
#endif

    switch (ctx->pc) {
        case 0x1bdb1cu: goto label_1bdb1c;
        default: break;
    }

    ctx->pc = 0x1bdaf0u;

    // 0x1bdaf0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bdaf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdaf8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1bdaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdafc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bdb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bdb08: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1bdb0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bdb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdb10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bdb14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BDB14u;
    SET_GPR_U32(ctx, 31, 0x1BDB1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BDB14u, 0x1BDB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB1Cu;
label_1bdb1c:
    // 0x1bdb1c: 0x3c024322  lui         $v0, 0x4322
    ctx->pc = 0x1bdb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17186 << 16));
    // 0x1bdb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdb24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb28: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bdb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1bdb2c: 0x3c044101  lui         $a0, 0x4101
    ctx->pc = 0x1bdb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16641 << 16));
    // 0x1bdb30: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x1bdb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1bdb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdb38: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb3c: 0xe4a01280  swc1        $f0, 0x1280($a1)
    ctx->pc = 0x1bdb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4736), bits); }
    // 0x1bdb40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bdb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bdb44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb48: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1bdb48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb4c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bdb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bdb50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb54: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1bdb54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb5c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bdb5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bdb60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdb64: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bdb64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bdb68u;
}
