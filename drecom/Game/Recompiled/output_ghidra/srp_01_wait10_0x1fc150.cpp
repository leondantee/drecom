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

// Function: srp_01_wait10
// Address: 0x1fc150 - 0x1fc4e4
void srp_01_wait10_0x1fc150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_01_wait10_0x1fc150");
#endif

    switch (ctx->pc) {
        case 0x1fc1e8u: goto label_1fc1e8;
        case 0x1fc228u: goto label_1fc228;
        case 0x1fc294u: goto label_1fc294;
        case 0x1fc2acu: goto label_1fc2ac;
        case 0x1fc2e4u: goto label_1fc2e4;
        case 0x1fc334u: goto label_1fc334;
        case 0x1fc354u: goto label_1fc354;
        case 0x1fc37cu: goto label_1fc37c;
        case 0x1fc3acu: goto label_1fc3ac;
        case 0x1fc404u: goto label_1fc404;
        case 0x1fc434u: goto label_1fc434;
        default: break;
    }

    ctx->pc = 0x1fc150u;

    // 0x1fc150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc154: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1fc154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fc158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc15c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc160: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1fc160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1fc164: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc168: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x1fc168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1fc16c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1fc16cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc170: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc174: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1fc174u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1fc178: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc17c: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x1fc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fc180: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1fc180u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc184: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc188: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc18c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc190: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc194: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc19c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1fc19cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1fc1a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc1a4: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fc1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fc1a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc1ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc1b0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FC1B0u;
    {
        const bool branch_taken_0x1fc1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1b0) {
            ctx->pc = 0x1FC24Cu;
            goto label_1fc24c;
        }
    }
    ctx->pc = 0x1FC1B8u;
    // 0x1fc1b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc1bc: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc1bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc1c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc1c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc1c8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC1C8u;
    {
        const bool branch_taken_0x1fc1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1c8) {
            ctx->pc = 0x1FC24Cu;
            goto label_1fc24c;
        }
    }
    ctx->pc = 0x1FC1D0u;
    // 0x1fc1d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc1d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc1d8: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x1fc1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fc1dc: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fc1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fc1e0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC1E0u;
    SET_GPR_U32(ctx, 31, 0x1FC1E8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC1E8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC1E8u) { return; }
    ctx->pc = 0x1FC1E8u;
label_1fc1e8:
    // 0x1fc1e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc1ec: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc1f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc1f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc1fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc200: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fc200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc204: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc208: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc20c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc210: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc214: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc218: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc21c: 0x24a503c0  addiu       $a1, $a1, 0x3C0
    ctx->pc = 0x1fc21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x1fc220: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC220u;
    SET_GPR_U32(ctx, 31, 0x1FC228u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC228u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC228u) { return; }
    ctx->pc = 0x1FC228u;
label_1fc228:
    // 0x1fc228: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc22c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc230: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc234: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc23c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc240: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc248: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fc24c:
    // 0x1fc24c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc250: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fc250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fc254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc258: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc25c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC25Cu;
    {
        const bool branch_taken_0x1fc25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc25c) {
            ctx->pc = 0x1FC2BCu;
            goto label_1fc2bc;
        }
    }
    ctx->pc = 0x1FC264u;
    // 0x1fc264: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc268: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc26c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc270: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc274: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC274u;
    {
        const bool branch_taken_0x1fc274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc274) {
            ctx->pc = 0x1FC2BCu;
            goto label_1fc2bc;
        }
    }
    ctx->pc = 0x1FC27Cu;
    // 0x1fc27c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc280: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc284: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fc288: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fc288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fc28c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC28Cu;
    SET_GPR_U32(ctx, 31, 0x1FC294u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC294u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC294u) { return; }
    ctx->pc = 0x1FC294u;
label_1fc294:
    // 0x1fc294: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc298: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc29c: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x1fc29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1fc2a0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2a4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC2A4u;
    SET_GPR_U32(ctx, 31, 0x1FC2ACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC2ACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC2ACu) { return; }
    ctx->pc = 0x1FC2ACu;
label_1fc2ac:
    // 0x1fc2ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc2b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fc2bc:
    // 0x1fc2bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2c0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc2c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc2c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc2cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2d0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc2d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc2d8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fc2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2dc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FC2DCu;
    SET_GPR_U32(ctx, 31, 0x1FC2E4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FC2DCu, 0x1FC2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2E4u;
label_1fc2e4:
    // 0x1fc2e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2e8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc2e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc2ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC2ECu;
    {
        const bool branch_taken_0x1fc2ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc2ec) {
            ctx->pc = 0x1FC308u;
            goto label_1fc308;
        }
    }
    ctx->pc = 0x1FC2F4u;
    // 0x1fc2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc2f8: 0x0  nop
    ctx->pc = 0x1fc2f8u;
    // NOP
    // 0x1fc2fc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC300u;
    {
        const bool branch_taken_0x1fc300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc300) {
            ctx->pc = 0x1FC324u;
            goto label_1fc324;
        }
    }
    ctx->pc = 0x1FC308u;
label_1fc308:
    // 0x1fc308: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fc308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fc30c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc310: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fc314: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc318: 0x0  nop
    ctx->pc = 0x1fc318u;
    // NOP
    // 0x1fc31c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc31cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc320: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fc320u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fc324:
    // 0x1fc324: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc328: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc32c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC32Cu;
    SET_GPR_U32(ctx, 31, 0x1FC334u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC334u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC334u) { return; }
    ctx->pc = 0x1FC334u;
label_1fc334:
    // 0x1fc334: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fc334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc33c: 0x0  nop
    ctx->pc = 0x1fc33cu;
    // NOP
    // 0x1fc340: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fc340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fc344: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fc344u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc348: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc34c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FC34Cu;
    {
        const bool branch_taken_0x1fc34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc34c) {
            ctx->pc = 0x1FC410u;
            goto label_1fc410;
        }
    }
    ctx->pc = 0x1FC354u;
label_1fc354:
    // 0x1fc354: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc358: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc35c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc360: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fc364: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc368: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc36c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc370: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc374: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FC374u;
    SET_GPR_U32(ctx, 31, 0x1FC37Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FC374u, 0x1FC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC37Cu;
label_1fc37c:
    // 0x1fc37c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc380: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc388: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc38c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc390: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc394: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc398: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc39c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc3a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc3a4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FC3A4u;
    SET_GPR_U32(ctx, 31, 0x1FC3ACu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FC3A4u, 0x1FC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC3ACu;
label_1fc3ac:
    // 0x1fc3ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc3b0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc3b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc3b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc3b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc3bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC3BCu;
    {
        const bool branch_taken_0x1fc3bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc3bc) {
            ctx->pc = 0x1FC3D8u;
            goto label_1fc3d8;
        }
    }
    ctx->pc = 0x1FC3C4u;
    // 0x1fc3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc3c8: 0x0  nop
    ctx->pc = 0x1fc3c8u;
    // NOP
    // 0x1fc3cc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc3d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC3D0u;
    {
        const bool branch_taken_0x1fc3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc3d0) {
            ctx->pc = 0x1FC3F4u;
            goto label_1fc3f4;
        }
    }
    ctx->pc = 0x1FC3D8u;
label_1fc3d8:
    // 0x1fc3d8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fc3dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc3e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fc3e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc3e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc3e8: 0x0  nop
    ctx->pc = 0x1fc3e8u;
    // NOP
    // 0x1fc3ec: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc3f0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fc3f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fc3f4:
    // 0x1fc3f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc3f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc3fc: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC3FCu;
    SET_GPR_U32(ctx, 31, 0x1FC404u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC404u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC404u) { return; }
    ctx->pc = 0x1FC404u;
label_1fc404:
    // 0x1fc404: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fc404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fc408: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc40c: 0x0  nop
    ctx->pc = 0x1fc40cu;
    // NOP
label_1fc410:
    // 0x1fc410: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc414: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fc414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fc418: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc41c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fc41cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fc420: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1FC420u;
    {
        const bool branch_taken_0x1fc420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc420) {
            ctx->pc = 0x1FC354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc354;
        }
    }
    ctx->pc = 0x1FC428u;
    // 0x1fc428: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fc428u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc42c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC42Cu;
    {
        const bool branch_taken_0x1fc42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc42c) {
            ctx->pc = 0x1FC470u;
            goto label_1fc470;
        }
    }
    ctx->pc = 0x1FC434u;
label_1fc434:
    // 0x1fc434: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc438: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fc438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fc43c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc440: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fc444: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fc444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fc448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc44c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc450: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fc450u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc454: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fc454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc458: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc45c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc460: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fc464: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fc464u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fc468: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc46c: 0x0  nop
    ctx->pc = 0x1fc46cu;
    // NOP
label_1fc470:
    // 0x1fc470: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc474: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc478: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc47c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fc480: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FC480u;
    {
        const bool branch_taken_0x1fc480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc480) {
            ctx->pc = 0x1FC434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc434;
        }
    }
    ctx->pc = 0x1FC488u;
    // 0x1fc488: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc48c: 0x8c6402a4  lw          $a0, 0x2A4($v1)
    ctx->pc = 0x1fc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 676)));
    // 0x1fc490: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc494: 0x8c630ab8  lw          $v1, 0xAB8($v1)
    ctx->pc = 0x1fc494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1fc498: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1fc498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fc49c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC49Cu;
    {
        const bool branch_taken_0x1fc49c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc49c) {
            ctx->pc = 0x1FC4B0u;
            goto label_1fc4b0;
        }
    }
    ctx->pc = 0x1FC4A4u;
    // 0x1fc4a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fc4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc4a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc4ac: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fc4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
label_1fc4b0:
    // 0x1fc4b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc4b4: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x1fc4b8: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x1fc4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x1fc4bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fc4bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc4c0: 0xc4800338  lwc1        $f0, 0x338($a0)
    ctx->pc = 0x1fc4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc4c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fc4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fc4c8: 0xe4800338  swc1        $f0, 0x338($a0)
    ctx->pc = 0x1fc4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 824), bits); }
    // 0x1fc4cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1fc4ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc4d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fc4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fc4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC4E4u;
}
