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

// Function: entry_00193bd8
// Address: 0x193bd8 - 0x193c18
void entry_00193bd8_0x193bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193bd8_0x193bd8");
#endif

    ctx->pc = 0x193bd8u;

    // 0x193bd8: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193bdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x193bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193be0: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x193be0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x193be4: 0x1020fed1  beqz        $at, . + 4 + (-0x12F << 2)
    ctx->pc = 0x193BE4u;
    {
        const bool branch_taken_0x193be4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x193be4) {
            ctx->pc = 0x19372Cu;
            return;
        }
    }
    ctx->pc = 0x193BECu;
    // 0x193bec: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x193becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193bf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x193bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x193bf4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x193bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x193bf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193BF8u;
    {
        const bool branch_taken_0x193bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193bf8) {
            ctx->pc = 0x193C18u;
            return;
        }
    }
    ctx->pc = 0x193C00u;
    // 0x193c00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x193c04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193C04u;
    {
        const bool branch_taken_0x193c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193c04) {
            ctx->pc = 0x193C18u;
            return;
        }
    }
    ctx->pc = 0x193C0Cu;
    // 0x193c0c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x193c0cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193c10: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x193C10u;
    {
        const bool branch_taken_0x193c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c10) {
            ctx->pc = 0x194510u;
            return;
        }
    }
    ctx->pc = 0x193C18u;
}
