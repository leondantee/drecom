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

// Function: entry_00296fe8
// Address: 0x296fe8 - 0x297040
void entry_00296fe8_0x296fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296fe8_0x296fe8");
#endif

    ctx->pc = 0x296fe8u;

    // 0x296fe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x296fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296fec: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296ff0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296ff4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296ff8: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x296ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296ffc: 0x1483ffef  bne         $a0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x296FFCu;
    {
        const bool branch_taken_0x296ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296ffc) {
            ctx->pc = 0x296FBCu;
            return;
        }
    }
    ctx->pc = 0x297004u;
    // 0x297004: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x297004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x297008: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x297008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29700c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x29700cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x297010: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x297010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x297014: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x297014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x297018: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x297018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x29701c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x29701cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297020: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x297020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x297024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x297024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x297028: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x297028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x29702c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x29702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297030: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x297030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x297034: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x297034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x297038: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x297038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x29703c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29703cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x297040u;
}
