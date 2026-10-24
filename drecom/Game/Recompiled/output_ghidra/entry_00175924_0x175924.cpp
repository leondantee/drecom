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

// Function: entry_00175924
// Address: 0x175924 - 0x1759a8
void entry_00175924_0x175924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175924_0x175924");
#endif

    ctx->pc = 0x175924u;

    // 0x175924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175928: 0x0  nop
    ctx->pc = 0x175928u;
    // NOP
    // 0x17592c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x17592cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175930: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x175930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x175934: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x175934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x175938: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x175938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17593c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17593cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175940: 0x0  nop
    ctx->pc = 0x175940u;
    // NOP
    // 0x175944: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x175944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175948: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17594c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17594cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175950: 0x0  nop
    ctx->pc = 0x175950u;
    // NOP
    // 0x175954: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x175958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17595c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17595cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175960: 0x0  nop
    ctx->pc = 0x175960u;
    // NOP
    // 0x175964: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x175964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x175968: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x17596c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175970: 0x0  nop
    ctx->pc = 0x175970u;
    // NOP
    // 0x175974: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x175974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x175978: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x175978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17597c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17597cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x175980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175988: 0x0  nop
    ctx->pc = 0x175988u;
    // NOP
    // 0x17598c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x17598cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x175990: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x175990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x175994: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x175994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x175998: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x17599c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1759a0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1759a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1759a4: 0x0  nop
    ctx->pc = 0x1759a4u;
    // NOP
    ctx->pc = 0x1759a8u;
}
