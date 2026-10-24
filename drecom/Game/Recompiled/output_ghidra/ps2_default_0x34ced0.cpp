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

// Function: default
// Address: 0x34ced0 - 0x34cf1c
void ps2_default_0x34ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x34ced0");
#endif

    ctx->pc = 0x34ced0u;

    // 0x34ced0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ced4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x34ced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x34ced8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34ced8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34cedc: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x34cedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x34cee0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34CEE0u;
    {
        const bool branch_taken_0x34cee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cee0) {
            ctx->pc = 0x34CF1Cu;
            return;
        }
    }
    ctx->pc = 0x34CEE8u;
    // 0x34cee8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34ceec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cef0: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34cef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cef4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34cef8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cefc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf00: 0xa0a40029  sb          $a0, 0x29($a1)
    ctx->pc = 0x34cf00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x34cf04: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34cf08: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x34cf08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34cf0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34cf0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cf10: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cf14: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x34cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cf18: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x34cf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    ctx->pc = 0x34cf1cu;
}
