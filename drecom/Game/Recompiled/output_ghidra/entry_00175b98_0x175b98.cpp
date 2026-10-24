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

// Function: entry_00175b98
// Address: 0x175b98 - 0x175c18
void entry_00175b98_0x175b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175b98_0x175b98");
#endif

    ctx->pc = 0x175b98u;

    // 0x175b98: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x175b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x175b9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x175b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x175ba0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x175ba4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x175ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x175ba8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x175ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x175bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175bb0: 0x24700060  addiu       $s0, $v1, 0x60
    ctx->pc = 0x175bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x175bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175bb8: 0x0  nop
    ctx->pc = 0x175bb8u;
    // NOP
    // 0x175bbc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x175bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175bc0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x175bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175bc4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x175bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x175bc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x175bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x175bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x175bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175bd0: 0x0  nop
    ctx->pc = 0x175bd0u;
    // NOP
    // 0x175bd4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x175bd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x175bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x175bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x175bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175be0: 0x0  nop
    ctx->pc = 0x175be0u;
    // NOP
    // 0x175be4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x175be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x175be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175bec: 0x0  nop
    ctx->pc = 0x175becu;
    // NOP
    // 0x175bf0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x175bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x175bf4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x175bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x175bf8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x175bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x175bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175c00: 0x0  nop
    ctx->pc = 0x175c00u;
    // NOP
    // 0x175c04: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x175c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x175c08: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x175c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x175c0c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x175c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x175c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x175c14: 0x0  nop
    ctx->pc = 0x175c14u;
    // NOP
    ctx->pc = 0x175c18u;
}
