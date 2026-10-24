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

// Function: entry_001d7af4
// Address: 0x1d7af4 - 0x1d7b80
void entry_001d7af4_0x1d7af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7af4_0x1d7af4");
#endif

    ctx->pc = 0x1d7af4u;

    // 0x1d7af4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7af8: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7afc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7b00: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d7b04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d7b08: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7b0c: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d7b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7b10: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7b14: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d7b18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d7b1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d7b20: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7b24: 0x24630a68  addiu       $v1, $v1, 0xA68
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7b28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d7b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7b2c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7b30: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1d7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x1d7b34: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7b38: 0x8c770068  lw          $s7, 0x68($v1)
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1d7b3c: 0x72e09628  paddub      $s2, $s7, $zero
    ctx->pc = 0x1d7b3cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d7b40: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d7b44: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x1d7b48: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d7b48u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d7b4c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7b50: 0x8c7100a8  lw          $s1, 0xA8($v1)
    ctx->pc = 0x1d7b50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1d7b54: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7b58: 0x8c7e0020  lw          $fp, 0x20($v1)
    ctx->pc = 0x1d7b58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d7b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7b60: 0x0  nop
    ctx->pc = 0x1d7b60u;
    // NOP
    // 0x1d7b64: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d7b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1d7b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7b6c: 0x0  nop
    ctx->pc = 0x1d7b6cu;
    // NOP
    // 0x1d7b70: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d7b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1d7b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7b78: 0x0  nop
    ctx->pc = 0x1d7b78u;
    // NOP
    // 0x1d7b7c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d7b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->pc = 0x1d7b80u;
}
