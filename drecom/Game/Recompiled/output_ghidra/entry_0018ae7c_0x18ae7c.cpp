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

// Function: entry_0018ae7c
// Address: 0x18ae7c - 0x18af54
void entry_0018ae7c_0x18ae7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ae7c_0x18ae7c");
#endif

    switch (ctx->pc) {
        case 0x18aea0u: goto label_18aea0;
        case 0x18aeb0u: goto label_18aeb0;
        default: break;
    }

    ctx->pc = 0x18ae7cu;

    // 0x18ae7c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18ae7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18ae80: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18ae80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ae84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ae88: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18ae88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18ae8c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x18ae8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ae90: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x18ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18ae94: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18ae94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ae98: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AE98u;
    SET_GPR_U32(ctx, 31, 0x18AEA0u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AE98u, 0x18AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEA0u;
label_18aea0:
    // 0x18aea0: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18aea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18aea4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18aea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18aea8: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AEA8u;
    SET_GPR_U32(ctx, 31, 0x18AEB0u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AEA8u, 0x18AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEB0u;
label_18aeb0:
    // 0x18aeb0: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18aeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18aeb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18aeb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18aeb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18aebc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aec0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18aec4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18aec8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18aecc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aed0: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x18aed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x18aed4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x18aed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18aed8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18aedc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aee0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x18aee4: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18aee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18aee8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18aee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18aeec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18aef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aef4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18aef8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18aefc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18af00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af04: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x18af04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18af08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18af08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18af0c: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x18af0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x18af10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af14: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x18af14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x18af18: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18af18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18af1c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18af1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18af20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18af20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18af24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af28: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18af2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18af30: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18af34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af38: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x18af38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x18af3c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x18af3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18af40: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x18af40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18af44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af48: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x18af48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x18af4c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x18AF4Cu;
    {
        const bool branch_taken_0x18af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af4c) {
            ctx->pc = 0x18B05Cu;
            return;
        }
    }
    ctx->pc = 0x18AF54u;
}
