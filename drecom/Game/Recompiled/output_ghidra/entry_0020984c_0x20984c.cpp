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

// Function: entry_0020984c
// Address: 0x20984c - 0x209880
void entry_0020984c_0x20984c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020984c_0x20984c");
#endif

    ctx->pc = 0x20984cu;

    // 0x20984c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x209850: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x209854: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x209854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x209858: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20985c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x209860: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x209864: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x209864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x209868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20986c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20986cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x209870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209874: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x209874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x209878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20987c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20987cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x209880u;
}
