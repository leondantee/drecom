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

// Function: entry_00338d38
// Address: 0x338d38 - 0x338e14
void entry_00338d38_0x338d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338d38_0x338d38");
#endif

    ctx->pc = 0x338d38u;

    // 0x338d38: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x338d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x338d3c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x338d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x338d40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x338d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x338d44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338d48: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x338d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x338d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338d50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x338d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x338d54: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338d58: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338d58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338d5c: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x338d5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338d60: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x338d60u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x338d64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338d68: 0x8c305438  lw          $s0, 0x5438($at)
    ctx->pc = 0x338d68u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x895438u));
    // 0x338d6c: 0x14163c  dsll32      $v0, $s4, 24
    ctx->pc = 0x338d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
    // 0x338d70: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338d70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338d74: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x338d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x338d78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x338d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x338d7c: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x338d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x338d80: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x338d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x338d84: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x338d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338d88: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338d8c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338d90: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338d98: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x338d9c: 0x83a40068  lb          $a0, 0x68($sp)
    ctx->pc = 0x338d9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x338da0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338da4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338da8: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338db0: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x338db0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x338db4: 0x83a40070  lb          $a0, 0x70($sp)
    ctx->pc = 0x338db4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338db8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338dbc: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338dc0: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338dc8: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x338dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x338dcc: 0x87a40078  lh          $a0, 0x78($sp)
    ctx->pc = 0x338dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x338dd0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338dd4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338dd8: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338de0: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x338de0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x338de4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338de8: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x338de8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x338dec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x338decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x338df0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338df4: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x338df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x338df8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x338df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x338dfc: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x338dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x338e00: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338E00u;
    {
        const bool branch_taken_0x338e00 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x338e00) {
            ctx->pc = 0x338E14u;
            return;
        }
    }
    ctx->pc = 0x338E08u;
    // 0x338e08: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x338E08u;
    {
        const bool branch_taken_0x338e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338e08) {
            ctx->pc = 0x338E14u;
            return;
        }
    }
    ctx->pc = 0x338E10u;
    // 0x338e10: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x338e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x338e14u;
}
