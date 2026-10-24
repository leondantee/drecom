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

// Function: entry_001f9b18
// Address: 0x1f9b18 - 0x1f9bf8
void entry_001f9b18_0x1f9b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9b18_0x1f9b18");
#endif

    ctx->pc = 0x1f9b18u;

    // 0x1f9b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9b1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b24: 0xa064007d  sb          $a0, 0x7D($v1)
    ctx->pc = 0x1f9b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9b28: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1f9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1f9b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b38: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1f9b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1f9b3c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1f9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1f9b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b4c: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f9b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x1f9b50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b60: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x1f9b64: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1f9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1f9b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b74: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x1f9b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x1f9b78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b80: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f9b84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f9b88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9b8c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F9B8Cu;
    {
        const bool branch_taken_0x1f9b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b8c) {
            ctx->pc = 0x1F9BF8u;
            return;
        }
    }
    ctx->pc = 0x1F9B94u;
    // 0x1f9b94: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1f9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1f9b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ba0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9ba4: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x1f9ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x1f9ba8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bac: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f9bb0: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x1f9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1f9bb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9bb8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f9bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f9bbc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1f9bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1f9bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9bc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9bcc: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1f9bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1f9bd0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1f9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1f9bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9bd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bdc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9be0: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f9be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x1f9be4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1f9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1f9be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9bec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bf0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9bf4: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x1f9bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    ctx->pc = 0x1f9bf8u;
}
