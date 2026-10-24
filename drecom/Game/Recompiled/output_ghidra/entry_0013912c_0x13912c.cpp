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

// Function: entry_0013912c
// Address: 0x13912c - 0x139160
void entry_0013912c_0x13912c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013912c_0x13912c");
#endif

    ctx->pc = 0x13912cu;

    // 0x13912c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x13912cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139130: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x139134: 0x24634eb0  addiu       $v1, $v1, 0x4EB0
    ctx->pc = 0x139134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20144));
    // 0x139138: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x139138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13913c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13913cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139140: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x139140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139144: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x139144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x139148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13914c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13914cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139150: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x139150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x139154: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x139154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139158: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x139158u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13915c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13915cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x139160u;
}
