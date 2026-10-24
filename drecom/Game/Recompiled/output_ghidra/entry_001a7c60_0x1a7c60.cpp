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

// Function: entry_001a7c60
// Address: 0x1a7c60 - 0x1a7d08
void entry_001a7c60_0x1a7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7c60_0x1a7c60");
#endif

    ctx->pc = 0x1a7c60u;

    // 0x1a7c60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a7c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7c64: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1a7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1a7c68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7c6c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7c70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7c74: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1a7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x1a7c78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7c7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7c80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7c84: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1a7c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a7c88: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7c8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7c90: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7c94: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1a7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7c98: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7c9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7ca0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7ca4: 0x24540354  addiu       $s4, $v0, 0x354
    ctx->pc = 0x1a7ca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 852));
    // 0x1a7ca8: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x1a7ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x1a7cac: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1a7cacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7cb0: 0x32680001  andi        $t0, $s3, 0x1
    ctx->pc = 0x1a7cb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1a7cb4: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1a7cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1a7cb8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7cbc: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1a7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a7cc0: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x1a7cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7cc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a7cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7cc8: 0x132042  srl         $a0, $s3, 1
    ctx->pc = 0x1a7cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x1a7ccc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7cd0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1a7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7cd4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1a7cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7cd8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1a7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a7cdc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7ce0: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x1a7ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a7ce4: 0x26350003  addiu       $s5, $s1, 0x3
    ctx->pc = 0x1a7ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7ce8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1a7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1a7cec: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1a7cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a7cf0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7cf4: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1a7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a7cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7cfc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7d00: 0x24480360  addiu       $t0, $v0, 0x360
    ctx->pc = 0x1a7d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x1a7d04: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1a7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1a7d08u;
}
