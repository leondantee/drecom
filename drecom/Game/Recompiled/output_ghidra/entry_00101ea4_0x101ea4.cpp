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

// Function: entry_00101ea4
// Address: 0x101ea4 - 0x101ec8
void entry_00101ea4_0x101ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101ea4_0x101ea4");
#endif

    ctx->pc = 0x101ea4u;

    // 0x101ea4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x101ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x101ea8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x101ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x101eac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x101eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x101eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101eb4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x101eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
    // 0x101eb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x101eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101ebc: 0x24c63990  addiu       $a2, $a2, 0x3990
    ctx->pc = 0x101ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14736));
    // 0x101ec0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x101ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x101ec4: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x101ec4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x101ec8u;
}
