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

// Function: entry_00111910
// Address: 0x111910 - 0x111a14
void entry_00111910_0x111910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111910_0x111910");
#endif

    ctx->pc = 0x111910u;

    // 0x111910: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111914: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11191c: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111920: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111924: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111928: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11192c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11192cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111930: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111934: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111938: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11193c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x11193cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111940: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111944: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111948: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x11194c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11194cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111950: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x111950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x111954: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111958: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11195c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11195cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111960: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111964: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111968: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x11196c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11196cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111970: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111974: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111978: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x111978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11197c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11197cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x111980: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111984: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111988: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11198c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11198cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111990: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111994: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111998: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11199c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1119a0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1119a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1119a4: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1119a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1119a8: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1119a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x1119ac: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1119acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1119b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1119b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1119b4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1119b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1119b8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1119b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1119bc: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1119bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1119c0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1119c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1119c4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1119c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1119c8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1119c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1119cc: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1119ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1119d0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1119d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1119d4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1119d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1119d8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1119d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1119dc: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1119dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1119e0: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1119e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1119e4: 0x46051580  add.s       $f22, $f2, $f5
    ctx->pc = 0x1119e4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1119e8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1119e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1119ec: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1119ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x1119f0: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x1119f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1119f4: 0x0  nop
    ctx->pc = 0x1119f4u;
    // NOP
    // 0x1119f8: 0x0  nop
    ctx->pc = 0x1119f8u;
    // NOP
    // 0x1119fc: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1119fcu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x111a00: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x111a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x111a04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x111a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x111a08: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x111a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x111a0c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x111A0Cu;
    {
        const bool branch_taken_0x111a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A0Cu;
        // 0x111a10: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a0c) {
            ctx->pc = 0x111C78u;
            return;
        }
    }
    ctx->pc = 0x111A14u;
}
