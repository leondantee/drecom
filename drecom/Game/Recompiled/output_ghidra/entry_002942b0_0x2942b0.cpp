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

// Function: entry_002942b0
// Address: 0x2942b0 - 0x294390
void entry_002942b0_0x2942b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002942b0_0x2942b0");
#endif

    ctx->pc = 0x2942b0u;

    // 0x2942b0: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x2942b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2942b4: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2942b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x2942b8: 0x26150090  addiu       $s5, $s0, 0x90
    ctx->pc = 0x2942b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2942bc: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x2942bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2942c0: 0x261200e0  addiu       $s2, $s0, 0xE0
    ctx->pc = 0x2942c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2942c4: 0x8e130078  lw          $s3, 0x78($s0)
    ctx->pc = 0x2942c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2942c8: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2942c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x2942cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942d0: 0x0  nop
    ctx->pc = 0x2942d0u;
    // NOP
    // 0x2942d4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2942d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2942d8: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x2942d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x2942dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942e0: 0x0  nop
    ctx->pc = 0x2942e0u;
    // NOP
    // 0x2942e4: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x2942e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2942e8: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x2942e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x2942ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942f0: 0x0  nop
    ctx->pc = 0x2942f0u;
    // NOP
    // 0x2942f4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2942f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2942f8: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x2942f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x2942fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294300: 0x0  nop
    ctx->pc = 0x294300u;
    // NOP
    // 0x294304: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x294304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x294308: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x294308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x29430c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29430cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294310: 0x0  nop
    ctx->pc = 0x294310u;
    // NOP
    // 0x294314: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294318: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x294318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x29431c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29431cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294320: 0x0  nop
    ctx->pc = 0x294320u;
    // NOP
    // 0x294324: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x294324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x294328: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x294328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x29432c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29432cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294330: 0x0  nop
    ctx->pc = 0x294330u;
    // NOP
    // 0x294334: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x294334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x294338: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x294338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x29433c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29433cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294340: 0x0  nop
    ctx->pc = 0x294340u;
    // NOP
    // 0x294344: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x294344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x294348: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x294348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x29434c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29434cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294350: 0x0  nop
    ctx->pc = 0x294350u;
    // NOP
    // 0x294354: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x294354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x294358: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x294358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x29435c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29435cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294360: 0x0  nop
    ctx->pc = 0x294360u;
    // NOP
    // 0x294364: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x294364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x294368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29436c: 0x1283001a  beq         $s4, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29436Cu;
    {
        const bool branch_taken_0x29436c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x29436c) {
            ctx->pc = 0x2943D8u;
            return;
        }
    }
    ctx->pc = 0x294374u;
    // 0x294374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294378: 0x1283000d  beq         $s4, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x294378u;
    {
        const bool branch_taken_0x294378 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x294378) {
            ctx->pc = 0x2943B0u;
            return;
        }
    }
    ctx->pc = 0x294380u;
    // 0x294380: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x294380u;
    {
        const bool branch_taken_0x294380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x294380) {
            ctx->pc = 0x294390u;
            return;
        }
    }
    ctx->pc = 0x294388u;
    // 0x294388: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x294388u;
    {
        const bool branch_taken_0x294388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294388) {
            ctx->pc = 0x294400u;
            return;
        }
    }
    ctx->pc = 0x294390u;
}
