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

// Function: entry_0025f390
// Address: 0x25f390 - 0x25f3f0
void entry_0025f390_0x25f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f390_0x25f390");
#endif

    ctx->pc = 0x25f390u;

    // 0x25f390: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25f390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f394: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25f394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25f398: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25f39c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f3a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f3a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f3a8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f3ac: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f3b0: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25f3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f3b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25f3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25f3b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25f3bc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25F3BCu;
    {
        const bool branch_taken_0x25f3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25f3bc) {
            ctx->pc = 0x25F3F0u;
            return;
        }
    }
    ctx->pc = 0x25F3C4u;
    // 0x25f3c4: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x25f3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25f3c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25f3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25f3cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f3d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f3d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f3d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f3dc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f3e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f3e4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25f3e8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x25f3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f3ec: 0x0  nop
    ctx->pc = 0x25f3ecu;
    // NOP
    ctx->pc = 0x25f3f0u;
}
