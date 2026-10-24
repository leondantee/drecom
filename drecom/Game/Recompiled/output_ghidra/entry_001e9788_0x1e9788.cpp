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

// Function: entry_001e9788
// Address: 0x1e9788 - 0x1e97e0
void entry_001e9788_0x1e9788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9788_0x1e9788");
#endif

    ctx->pc = 0x1e9788u;

    // 0x1e9788: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e978c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1e978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9790: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1e9790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1e9794: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1e9794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1e9798: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1e9798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1e979c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e97a0: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1e97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1e97a4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E97A4u;
    {
        const bool branch_taken_0x1e97a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e97a4) {
            ctx->pc = 0x1E97E0u;
            return;
        }
    }
    ctx->pc = 0x1E97ACu;
    // 0x1e97ac: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e97acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e97b0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x1e97b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x1e97b4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e97b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e97b8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e97bc: 0x24639d60  addiu       $v1, $v1, -0x62A0
    ctx->pc = 0x1e97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942048));
    // 0x1e97c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e97c4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1e97c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e97c8: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1e97c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1e97cc: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e97d0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1e97d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1e97d4: 0x84a3005e  lh          $v1, 0x5E($a1)
    ctx->pc = 0x1e97d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 94)));
    // 0x1e97d8: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e97dc: 0xa4a4005e  sh          $a0, 0x5E($a1)
    ctx->pc = 0x1e97dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 94), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1e97e0u;
}
