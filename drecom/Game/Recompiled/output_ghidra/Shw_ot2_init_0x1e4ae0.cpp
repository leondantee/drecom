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

// Function: Shw_ot2_init
// Address: 0x1e4ae0 - 0x1e4b70
void Shw_ot2_init_0x1e4ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_ot2_init_0x1e4ae0");
#endif

    ctx->pc = 0x1e4ae0u;

    // 0x1e4ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4ae8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4aec: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1e4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4af0: 0x30700001  andi        $s0, $v1, 0x1
    ctx->pc = 0x1e4af0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e4af4: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e4af8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e4afc: 0x24630a10  addiu       $v1, $v1, 0xA10
    ctx->pc = 0x1e4afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x1e4b00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4b04: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1e4b08: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1e4b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1e4b0c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1e4b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1e4b10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4b14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e4b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4b18: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e4b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4b1c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e4b20: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1e4b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4b24: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e4b28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e4b2c: 0x24630a10  addiu       $v1, $v1, 0xA10
    ctx->pc = 0x1e4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x1e4b30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4b34: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x1e4b34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x1e4b38: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e4b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e4b3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e4b40: 0x24630a10  addiu       $v1, $v1, 0xA10
    ctx->pc = 0x1e4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x1e4b44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4b48: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1e4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1e4b4c: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e4b50: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e4b54: 0x24630a10  addiu       $v1, $v1, 0xA10
    ctx->pc = 0x1e4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x1e4b58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4b5c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1e4b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1e4b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4b64: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e4b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e4b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4B70u;
}
