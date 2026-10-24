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

// Function: entry_0025f5f8
// Address: 0x25f5f8 - 0x25f610
void entry_0025f5f8_0x25f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f5f8_0x25f5f8");
#endif

    ctx->pc = 0x25f5f8u;

    // 0x25f5f8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f5f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f5fc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f600: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f604: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f608: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x25f608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x25f60c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f60cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25f610u;
}
