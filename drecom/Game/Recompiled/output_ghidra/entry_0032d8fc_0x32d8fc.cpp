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

// Function: entry_0032d8fc
// Address: 0x32d8fc - 0x32d994
void entry_0032d8fc_0x32d8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d8fc_0x32d8fc");
#endif

    ctx->pc = 0x32d8fcu;

    // 0x32d8fc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d900: 0x3453cccd  ori         $s3, $v0, 0xCCCD
    ctx->pc = 0x32d900u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d904: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x32d904u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d908: 0xc6201028  lwc1        $f0, 0x1028($s1)
    ctx->pc = 0x32d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d90c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32d90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d910: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32d910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32d914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d918: 0x0  nop
    ctx->pc = 0x32d918u;
    // NOP
    // 0x32d91c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32d91cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32d920: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x32d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d924: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32d928: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x32d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x32d92c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x32d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d930: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32d930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32d934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d938: 0x0  nop
    ctx->pc = 0x32d938u;
    // NOP
    // 0x32d93c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32d93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32d940: 0x0  nop
    ctx->pc = 0x32d940u;
    // NOP
    // 0x32d944: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x32D944u;
    {
        const bool branch_taken_0x32d944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32d944) {
            ctx->pc = 0x32D994u;
            return;
        }
    }
    ctx->pc = 0x32D94Cu;
    // 0x32d94c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x32d950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d954: 0xc6201034  lwc1        $f0, 0x1034($s1)
    ctx->pc = 0x32d954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d958: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32d958u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32d95c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x32d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x32d960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d964: 0x0  nop
    ctx->pc = 0x32d964u;
    // NOP
    // 0x32d968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32d968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32d96c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x32d96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x32d970: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x32d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d974: 0x3c0240cc  lui         $v0, 0x40CC
    ctx->pc = 0x32d974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16588 << 16));
    // 0x32d978: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d97c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d980: 0x0  nop
    ctx->pc = 0x32d980u;
    // NOP
    // 0x32d984: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32d988: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x32d988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x32d98c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32D98Cu;
    {
        const bool branch_taken_0x32d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d98c) {
            ctx->pc = 0x32D9D8u;
            return;
        }
    }
    ctx->pc = 0x32D994u;
}
