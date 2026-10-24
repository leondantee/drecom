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

// Function: entry_00124260
// Address: 0x124260 - 0x1242e4
void entry_00124260_0x124260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124260_0x124260");
#endif

    ctx->pc = 0x124260u;

    // 0x124260: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124264: 0x9451000e  lhu         $s1, 0xE($v0)
    ctx->pc = 0x124264u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x124268: 0x3232ffff  andi        $s2, $s1, 0xFFFF
    ctx->pc = 0x124268u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x12426c: 0x32430020  andi        $v1, $s2, 0x20
    ctx->pc = 0x12426cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x124270: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x124270u;
    {
        const bool branch_taken_0x124270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124270) {
            ctx->pc = 0x1242F8u;
            return;
        }
    }
    ctx->pc = 0x124278u;
    // 0x124278: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12427c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x12427cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124280: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x124280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x124284: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x124284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x124288: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x124288u;
    {
        const bool branch_taken_0x124288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124288) {
            ctx->pc = 0x1242E4u;
            return;
        }
    }
    ctx->pc = 0x124290u;
    // 0x124290: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124294: 0x90820012  lbu         $v0, 0x12($a0)
    ctx->pc = 0x124294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x124298: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12429c: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x12429cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1242a0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1242A0u;
    {
        const bool branch_taken_0x1242a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242a0) {
            ctx->pc = 0x1242E4u;
            return;
        }
    }
    ctx->pc = 0x1242A8u;
    // 0x1242a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1242a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1242ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1242acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1242b0: 0xa0400b40  sb          $zero, 0xB40($v0)
    ctx->pc = 0x1242b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2880), (uint8_t)GPR_U32(ctx, 0));
    // 0x1242b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1242b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1242b8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1242b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1242bc: 0xa0400ab0  sb          $zero, 0xAB0($v0)
    ctx->pc = 0x1242bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2736), (uint8_t)GPR_U32(ctx, 0));
    // 0x1242c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1242c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1242c4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1242c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1242c8: 0xa0600f30  sb          $zero, 0xF30($v1)
    ctx->pc = 0x1242c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3888), (uint8_t)GPR_U32(ctx, 0));
    // 0x1242cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1242ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1242d0: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x1242d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1242d4: 0xa2200bd0  sb          $zero, 0xBD0($s1)
    ctx->pc = 0x1242d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3024), (uint8_t)GPR_U32(ctx, 0));
    // 0x1242d8: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x1242d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1242dc: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x1242dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1242e0: 0xa0600ea0  sb          $zero, 0xEA0($v1)
    ctx->pc = 0x1242e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3744), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1242e4u;
}
