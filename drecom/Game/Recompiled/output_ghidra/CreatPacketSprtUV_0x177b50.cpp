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

// Function: CreatPacketSprtUV
// Address: 0x177b50 - 0x177ce0
void CreatPacketSprtUV_0x177b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketSprtUV_0x177b50");
#endif

    ctx->pc = 0x177b50u;

    // 0x177b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177b54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177b5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x177b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x177b60: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x177b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x177b64: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x177b64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177b68: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x177b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x177b6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177b70: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x177b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x177b74: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177b78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b7c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177b80: 0x3c020434  lui         $v0, 0x434
    ctx->pc = 0x177b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1076 << 16));
    // 0x177b84: 0x34433710  ori         $v1, $v0, 0x3710
    ctx->pc = 0x177b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14096);
    // 0x177b88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b8c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x177b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x177b90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177b98: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177b9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177ba0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x177ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x177ba4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177ba8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x177ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x177bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177bb0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177bb4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x177bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x177bb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177bbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177bc0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177bc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177bc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177bcc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177bd0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x177bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177bd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177bd8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177bdc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177be0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x177be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177be4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x177BE4u;
    {
        const bool branch_taken_0x177be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177be4) {
            ctx->pc = 0x177C38u;
            goto label_177c38;
        }
    }
    ctx->pc = 0x177BECu;
    // 0x177bec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177bf0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x177bf4: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x177bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177bf8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x177bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x177bfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x177bfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x177c00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177c08: 0x11103e  dsrl32      $v0, $s1, 0
    ctx->pc = 0x177c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x177c0c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x177c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x177c10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x177c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177c14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177c18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x177c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177c1c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x177c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177c20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177c24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x177c24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x177c28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c2c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177c30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177C30u;
    {
        const bool branch_taken_0x177c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c30) {
            ctx->pc = 0x177C4Cu;
            goto label_177c4c;
        }
    }
    ctx->pc = 0x177C38u;
label_177c38:
    // 0x177c38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x177c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177c3c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x177c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x177c40: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x177c40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c48: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177c48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_177c4c:
    // 0x177c4c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x177c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x177c50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c58: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177c5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c60: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177c64: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177c68: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x177c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x177c6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177c78: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x177c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x177c7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c80: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177c84: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x177c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x177c88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c90: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x177c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177c94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177c9c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177ca0: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x177ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x177ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ca8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177cac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x177cb0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x177cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177cb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177cb8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x177cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x177cbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177cc0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177cc4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x177cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x177cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177cd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x177cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x177CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177CE0u;
}
