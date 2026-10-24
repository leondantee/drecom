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

// Function: entry_0026907c
// Address: 0x26907c - 0x2691dc
void entry_0026907c_0x26907c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026907c_0x26907c");
#endif

    switch (ctx->pc) {
        case 0x2691c0u: goto label_2691c0;
        default: break;
    }

    ctx->pc = 0x26907cu;

    // 0x26907c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x26907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x269080: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x269084: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x269084u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x269088: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x269088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x26908c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x26908cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x269090: 0x12030052  beq         $s0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x269090u;
    {
        const bool branch_taken_0x269090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x269090) {
            ctx->pc = 0x2691DCu;
            return;
        }
    }
    ctx->pc = 0x269098u;
    // 0x269098: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x269098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26909c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26909cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690a0: 0x0  nop
    ctx->pc = 0x2690a0u;
    // NOP
    // 0x2690a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2690a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2690a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2690a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2690ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690b0: 0x0  nop
    ctx->pc = 0x2690b0u;
    // NOP
    // 0x2690b4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2690b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2690b8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2690b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2690bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690c0: 0x0  nop
    ctx->pc = 0x2690c0u;
    // NOP
    // 0x2690c4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2690c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2690c8: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x2690c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x2690cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690d0: 0x0  nop
    ctx->pc = 0x2690d0u;
    // NOP
    // 0x2690d4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2690d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2690d8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2690d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2690dc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2690dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2690e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690e4: 0x0  nop
    ctx->pc = 0x2690e4u;
    // NOP
    // 0x2690e8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2690e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2690ec: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2690ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2690f0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2690f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2690f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690f8: 0x0  nop
    ctx->pc = 0x2690f8u;
    // NOP
    // 0x2690fc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2690fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x269100: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x269100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x269104: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x269104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x269108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26910c: 0x0  nop
    ctx->pc = 0x26910cu;
    // NOP
    // 0x269110: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x269110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x269114: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x269114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x269118: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x269118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x26911c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269120: 0x0  nop
    ctx->pc = 0x269120u;
    // NOP
    // 0x269124: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x269124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x269128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x269128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26912c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26912cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269130: 0x0  nop
    ctx->pc = 0x269130u;
    // NOP
    // 0x269134: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x269134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x269138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x269138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26913c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26913cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269140: 0x0  nop
    ctx->pc = 0x269140u;
    // NOP
    // 0x269144: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x269144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x269148: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x269148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x26914c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26914cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269150: 0x0  nop
    ctx->pc = 0x269150u;
    // NOP
    // 0x269154: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x269154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x269158: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x269158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x26915c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269160: 0x0  nop
    ctx->pc = 0x269160u;
    // NOP
    // 0x269164: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x269164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x269168: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x269168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x26916c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x26916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269174: 0x0  nop
    ctx->pc = 0x269174u;
    // NOP
    // 0x269178: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x269178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26917c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x26917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x269180: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x269180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269188: 0x0  nop
    ctx->pc = 0x269188u;
    // NOP
    // 0x26918c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x26918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x269190: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x269190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x269194: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x269194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26919c: 0x0  nop
    ctx->pc = 0x26919cu;
    // NOP
    // 0x2691a0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2691a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2691a4: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x2691a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x2691a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2691a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2691ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2691acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2691b0: 0x0  nop
    ctx->pc = 0x2691b0u;
    // NOP
    // 0x2691b4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2691b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2691b8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2691B8u;
    SET_GPR_U32(ctx, 31, 0x2691C0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2691B8u, 0x2691C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691C0u;
label_2691c0:
    // 0x2691c0: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x2691c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x2691c4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2691c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2691c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2691c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2691cc: 0x0  nop
    ctx->pc = 0x2691ccu;
    // NOP
    // 0x2691d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2691d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2691d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2691d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2691d8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2691d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x2691dcu;
}
