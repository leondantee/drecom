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

// Function: entry_001a7b54
// Address: 0x1a7b54 - 0x1a7c18
void entry_001a7b54_0x1a7b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7b54_0x1a7b54");
#endif

    ctx->pc = 0x1a7b54u;

    // 0x1a7b54: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7b58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7b5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7b60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7b64: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7b68: 0x90c200b3  lbu         $v0, 0xB3($a2)
    ctx->pc = 0x1a7b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 179)));
    // 0x1a7b6c: 0x21ebc  dsll32      $v1, $v0, 26
    ctx->pc = 0x1a7b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1a7b70: 0x3173e  dsrl32      $v0, $v1, 28
    ctx->pc = 0x1a7b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1a7b74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7b78: 0x90c500b3  lbu         $a1, 0xB3($a2)
    ctx->pc = 0x1a7b78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 179)));
    // 0x1a7b7c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1a7b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a7b80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7b84: 0x2404ffc3  addiu       $a0, $zero, -0x3D
    ctx->pc = 0x1a7b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a7b88: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1a7b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1a7b8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a7b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7b90: 0xa0c200b3  sb          $v0, 0xB3($a2)
    ctx->pc = 0x1a7b90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7b94: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7b98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7b9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ba0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7ba4: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1a7ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7ba8: 0xdd0300b0  ld          $v1, 0xB0($t0)
    ctx->pc = 0x1a7ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1a7bac: 0x317b8  dsll        $v0, $v1, 30
    ctx->pc = 0x1a7bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 30);
    // 0x1a7bb0: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x1a7bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a7bb4: 0x64620008  daddiu      $v0, $v1, 0x8
    ctx->pc = 0x1a7bb4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)8);
    // 0x1a7bb8: 0xdd0700b0  ld          $a3, 0xB0($t0)
    ctx->pc = 0x1a7bb8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1a7bbc: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x1a7bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a7bc0: 0x437b8  dsll        $a2, $a0, 30
    ctx->pc = 0x1a7bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 30);
    // 0x1a7bc4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a7bc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a7bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7bcc: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x1a7bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x1a7bd0: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x1a7bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1a7bd4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a7bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7bd8: 0xe32024  and         $a0, $a3, $v1
    ctx->pc = 0x1a7bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a7bdc: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x1a7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1a7be0: 0xfd0200b0  sd          $v0, 0xB0($t0)
    ctx->pc = 0x1a7be0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 176), GPR_U64(ctx, 2));
    // 0x1a7be4: 0x82030310  lb          $v1, 0x310($s0)
    ctx->pc = 0x1a7be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7be8: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1a7be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a7bec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a7becu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a7bf0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1a7bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a7bf4: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7BF4u;
    {
        const bool branch_taken_0x1a7bf4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1a7bf4) {
            ctx->pc = 0x1A7C18u;
            return;
        }
    }
    ctx->pc = 0x1A7BFCu;
    // 0x1a7bfc: 0x82030310  lb          $v1, 0x310($s0)
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7c00: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1a7c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a7c04: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a7c04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a7c08: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a7c0c: 0x24930010  addiu       $s3, $a0, 0x10
    ctx->pc = 0x1a7c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a7c10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7C10u;
    {
        const bool branch_taken_0x1a7c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c10) {
            ctx->pc = 0x1A7C60u;
            return;
        }
    }
    ctx->pc = 0x1A7C18u;
}
