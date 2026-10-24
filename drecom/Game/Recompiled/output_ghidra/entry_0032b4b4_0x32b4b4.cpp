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

// Function: entry_0032b4b4
// Address: 0x32b4b4 - 0x32b4f0
void entry_0032b4b4_0x32b4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b4b4_0x32b4b4");
#endif

    ctx->pc = 0x32b4b4u;

    // 0x32b4b4: 0x92d428b9  lbu         $s4, 0x28B9($s6)
    ctx->pc = 0x32b4b4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10425)));
    // 0x32b4b8: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x32b4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x32b4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b4c0: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32B4C0u;
    {
        const bool branch_taken_0x32b4c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b4c0) {
            ctx->pc = 0x32B4F0u;
            return;
        }
    }
    ctx->pc = 0x32B4C8u;
    // 0x32b4c8: 0x92c328c0  lbu         $v1, 0x28C0($s6)
    ctx->pc = 0x32b4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10432)));
    // 0x32b4cc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32b4ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b4d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b4d4: 0x14c3031b  bne         $a2, $v1, . + 4 + (0x31B << 2)
    ctx->pc = 0x32B4D4u;
    {
        const bool branch_taken_0x32b4d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32b4d4) {
            ctx->pc = 0x32C144u;
            return;
        }
    }
    ctx->pc = 0x32B4DCu;
    // 0x32b4dc: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b4e0: 0x9026c78d  lbu         $a2, -0x3873($at)
    ctx->pc = 0x32b4e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x62C78Du));
    // 0x32b4e4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x32b4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x32b4e8: 0x14600316  bnez        $v1, . + 4 + (0x316 << 2)
    ctx->pc = 0x32B4E8u;
    {
        const bool branch_taken_0x32b4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b4e8) {
            ctx->pc = 0x32C144u;
            return;
        }
    }
    ctx->pc = 0x32B4F0u;
}
