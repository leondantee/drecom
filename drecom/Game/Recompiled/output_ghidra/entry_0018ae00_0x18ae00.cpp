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

// Function: entry_0018ae00
// Address: 0x18ae00 - 0x18ae30
void entry_0018ae00_0x18ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ae00_0x18ae00");
#endif

    ctx->pc = 0x18ae00u;

    // 0x18ae00: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x18ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x18ae04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18ae08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18ae0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18ae10: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18ae14: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18ae18: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18ae1c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ae20: 0x90620097  lbu         $v0, 0x97($v1)
    ctx->pc = 0x18ae20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 151)));
    // 0x18ae24: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x18ae28: 0xa0620097  sb          $v0, 0x97($v1)
    ctx->pc = 0x18ae28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ae2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ae2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x18ae30u;
}
