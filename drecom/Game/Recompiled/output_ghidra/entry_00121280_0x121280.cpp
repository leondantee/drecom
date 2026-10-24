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

// Function: entry_00121280
// Address: 0x121280 - 0x1212bc
void entry_00121280_0x121280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121280_0x121280");
#endif

    ctx->pc = 0x121280u;

    // 0x121280: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121284: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x121284u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x121288: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x121288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12128c: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x12128cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x121290: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x121290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x121294: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x121294u;
    {
        const bool branch_taken_0x121294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x121294) {
            ctx->pc = 0x1212BCu;
            return;
        }
    }
    ctx->pc = 0x12129Cu;
    // 0x12129c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1212a0: 0x9464000e  lhu         $a0, 0xE($v1)
    ctx->pc = 0x1212a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1212a4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1212a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1212a8: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x1212a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x1212ac: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1212acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1212b0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1212B0u;
    {
        const bool branch_taken_0x1212b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1212b0) {
            ctx->pc = 0x1212BCu;
            return;
        }
    }
    ctx->pc = 0x1212B8u;
    // 0x1212b8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1212b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1212bcu;
}
