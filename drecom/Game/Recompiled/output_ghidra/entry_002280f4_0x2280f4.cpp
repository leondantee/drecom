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

// Function: entry_002280f4
// Address: 0x2280f4 - 0x228184
void entry_002280f4_0x2280f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002280f4_0x2280f4");
#endif

    switch (ctx->pc) {
        case 0x228140u: goto label_228140;
        case 0x228178u: goto label_228178;
        default: break;
    }

    ctx->pc = 0x2280f4u;

    // 0x2280f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2280f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2280f8: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2280f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2280fc: 0x1460014c  bnez        $v1, . + 4 + (0x14C << 2)
    ctx->pc = 0x2280FCu;
    {
        const bool branch_taken_0x2280fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2280fc) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x228104u;
    // 0x228104: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228108: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x228108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22810c: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x22810Cu;
    {
        const bool branch_taken_0x22810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22810c) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x228114u;
    // 0x228114: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x228114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x228118: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22811c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22811cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x228120: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228124: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228128: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22812c: 0x24061e21  addiu       $a2, $zero, 0x1E21
    ctx->pc = 0x22812cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7713));
    // 0x228130: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228134: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x228138: 0xc0965d0  jal         func_259740
    ctx->pc = 0x228138u;
    SET_GPR_U32(ctx, 31, 0x228140u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228138u, 0x228140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228140u;
label_228140:
    // 0x228140: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x228140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228144: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x228144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x228148: 0xa022dbc2  sb          $v0, -0x243E($at)
    ctx->pc = 0x228148u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x22814c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228150: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x228150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x228154: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x228154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x228158: 0x3c104000  lui         $s0, 0x4000
    ctx->pc = 0x228158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16384 << 16));
    // 0x22815c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x22815cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x228160: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x228160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x228164: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228168: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x228168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22816c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228170: 0xc0507ac  jal         func_141EB0
    ctx->pc = 0x228170u;
    SET_GPR_U32(ctx, 31, 0x228178u);
    ctx->pc = 0x141EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141EB0u, 0x228170u, 0x228178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228178u;
label_228178:
    // 0x228178: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x228178u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22817c: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x22817Cu;
    {
        const bool branch_taken_0x22817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22817c) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x228184u;
}
