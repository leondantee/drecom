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

// Function: entry_00346094
// Address: 0x346094 - 0x3460dc
void entry_00346094_0x346094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346094_0x346094");
#endif

    ctx->pc = 0x346094u;

    // 0x346094: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x346094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346098: 0x910309db  lbu         $v1, 0x9DB($t0)
    ctx->pc = 0x346098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2523)));
    // 0x34609c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34609cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3460a0: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x3460a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3460a4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3460A4u;
    {
        const bool branch_taken_0x3460a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3460a4) {
            ctx->pc = 0x3460DCu;
            return;
        }
    }
    ctx->pc = 0x3460ACu;
    // 0x3460ac: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3460acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3460b0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x3460b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3460b4: 0xa0c00028  sb          $zero, 0x28($a2)
    ctx->pc = 0x3460b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3460b8: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x3460b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3460bc: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x3460bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x3460c0: 0xa1000029  sb          $zero, 0x29($t0)
    ctx->pc = 0x3460c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x3460c4: 0x3c043ccc  lui         $a0, 0x3CCC
    ctx->pc = 0x3460c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15564 << 16));
    // 0x3460c8: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x3460c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x3460cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3460ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3460d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3460d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3460d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3460d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3460d8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3460d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x3460dcu;
}
