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

// Function: entry_0018af54
// Address: 0x18af54 - 0x18afc4
void entry_0018af54_0x18af54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018af54_0x18af54");
#endif

    switch (ctx->pc) {
        case 0x18af78u: goto label_18af78;
        case 0x18af88u: goto label_18af88;
        default: break;
    }

    ctx->pc = 0x18af54u;

    // 0x18af54: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18af54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18af58: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18af58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18af5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18af60: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18af60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18af64: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x18af64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18af68: 0x24062400  addiu       $a2, $zero, 0x2400
    ctx->pc = 0x18af68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x18af6c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18af6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18af70: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AF70u;
    SET_GPR_U32(ctx, 31, 0x18AF78u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AF70u, 0x18AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF78u;
label_18af78:
    // 0x18af78: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18af78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18af7c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18af7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18af80: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AF80u;
    SET_GPR_U32(ctx, 31, 0x18AF88u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AF80u, 0x18AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF88u;
label_18af88:
    // 0x18af88: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18af88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18af8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18af8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18af90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18af90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18af94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af98: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18af98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18af9c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18afa0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18afa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18afa8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x18afa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18afac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18afacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18afb0: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x18afb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x18afb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18afb8: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x18afb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x18afbc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x18AFBCu;
    {
        const bool branch_taken_0x18afbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18afbc) {
            ctx->pc = 0x18B05Cu;
            return;
        }
    }
    ctx->pc = 0x18AFC4u;
}
