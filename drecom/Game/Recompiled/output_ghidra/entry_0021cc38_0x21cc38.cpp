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

// Function: entry_0021cc38
// Address: 0x21cc38 - 0x21ccb8
void entry_0021cc38_0x21cc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cc38_0x21cc38");
#endif

    ctx->pc = 0x21cc38u;

    // 0x21cc38: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21cc3c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21cc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21cc40: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x21CC40u;
    {
        const bool branch_taken_0x21cc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21cc40) {
            ctx->pc = 0x21CCB8u;
            return;
        }
    }
    ctx->pc = 0x21CC48u;
    // 0x21cc48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cc4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc50: 0x0  nop
    ctx->pc = 0x21cc50u;
    // NOP
    // 0x21cc54: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21cc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21cc58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cc5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc60: 0x0  nop
    ctx->pc = 0x21cc60u;
    // NOP
    // 0x21cc64: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21cc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21cc68: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cc6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc70: 0x0  nop
    ctx->pc = 0x21cc70u;
    // NOP
    // 0x21cc74: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21cc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21cc78: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x21cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x21cc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc80: 0x0  nop
    ctx->pc = 0x21cc80u;
    // NOP
    // 0x21cc84: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21cc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21cc88: 0x3c033f7c  lui         $v1, 0x3F7C
    ctx->pc = 0x21cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16252 << 16));
    // 0x21cc8c: 0x346328f6  ori         $v1, $v1, 0x28F6
    ctx->pc = 0x21cc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10486);
    // 0x21cc90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc94: 0x0  nop
    ctx->pc = 0x21cc94u;
    // NOP
    // 0x21cc98: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21cc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21cc9c: 0x3c03442a  lui         $v1, 0x442A
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17450 << 16));
    // 0x21cca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cca4: 0x0  nop
    ctx->pc = 0x21cca4u;
    // NOP
    // 0x21cca8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21cca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21ccac: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x21ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x21ccb0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x21ccb4: 0x0  nop
    ctx->pc = 0x21ccb4u;
    // NOP
    ctx->pc = 0x21ccb8u;
}
