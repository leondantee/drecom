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

// Function: entry_00374468
// Address: 0x374468 - 0x374480
void entry_00374468_0x374468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374468_0x374468");
#endif

    ctx->pc = 0x374468u;

    // 0x374468: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x37446c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x37446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x374470: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x374470u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x374474: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374478: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x374478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x37447c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x37447cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x374480u;
}
