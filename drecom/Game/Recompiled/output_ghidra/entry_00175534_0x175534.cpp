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

// Function: entry_00175534
// Address: 0x175534 - 0x1755a0
void entry_00175534_0x175534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175534_0x175534");
#endif

    ctx->pc = 0x175534u;

    // 0x175534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175538: 0x0  nop
    ctx->pc = 0x175538u;
    // NOP
    // 0x17553c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x17553cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175540: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x175540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175544: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x175544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x175548: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x175548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x17554c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x175550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175554: 0x0  nop
    ctx->pc = 0x175554u;
    // NOP
    // 0x175558: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x17555c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x17555cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x175560: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x175564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175568: 0x0  nop
    ctx->pc = 0x175568u;
    // NOP
    // 0x17556c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x17556cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x175570: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x175570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x175574: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x175574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x175578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17557c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17557cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175580: 0x0  nop
    ctx->pc = 0x175580u;
    // NOP
    // 0x175584: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x175584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x175588: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x175588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17558c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x17558cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x175590: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x175590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x175594: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175598: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175598u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17559c: 0x0  nop
    ctx->pc = 0x17559cu;
    // NOP
    ctx->pc = 0x1755a0u;
}
