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

// Function: entry_002340e8
// Address: 0x2340e8 - 0x2343cc
void entry_002340e8_0x2340e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002340e8_0x2340e8");
#endif

    switch (ctx->pc) {
        case 0x2340f8u: goto label_2340f8;
        case 0x2343bcu: goto label_2343bc;
        default: break;
    }

    ctx->pc = 0x2340e8u;

    // 0x2340e8: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x2340e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2340ec: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2340ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2340f0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2340F0u;
    SET_GPR_U32(ctx, 31, 0x2340F8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2340F8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2340F8u) { return; }
    ctx->pc = 0x2340F8u;
label_2340f8:
    // 0x2340f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2340f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2340fc: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x2340fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234100: 0x8ca602d0  lw          $a2, 0x2D0($a1)
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x234104: 0x24d24010  addiu       $s2, $a2, 0x4010
    ctx->pc = 0x234104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16400));
    // 0x234108: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23410c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x23410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234110: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x234110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x234114: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x234114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234118: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x234118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23411c: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x23411cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x234120: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x234120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234124: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x234124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234128: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x234128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23412c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x23412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x234130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x234134: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x234134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x234138: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23413c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x23413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234140: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x234140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x234144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234148: 0x0  nop
    ctx->pc = 0x234148u;
    // NOP
    // 0x23414c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23414cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234150: 0x0  nop
    ctx->pc = 0x234150u;
    // NOP
    // 0x234154: 0x4501009d  bc1t        . + 4 + (0x9D << 2)
    ctx->pc = 0x234154u;
    {
        const bool branch_taken_0x234154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x234154) {
            ctx->pc = 0x2343CCu;
            return;
        }
    }
    ctx->pc = 0x23415Cu;
    // 0x23415c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x234160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234164: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x234164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234168: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x234168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x23416c: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x23416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234170: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x234170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x234174: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x234174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x234178: 0x34a30200  ori         $v1, $a1, 0x200
    ctx->pc = 0x234178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x23417c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x23417cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x234180: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234184: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x234184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234188: 0x946610a4  lhu         $a2, 0x10A4($v1)
    ctx->pc = 0x234188u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x23418c: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x23418cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x234190: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x234190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x234194: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x234194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x234198: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x234198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23419c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x23419cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2341a0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2341a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2341a4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2341a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2341a8: 0x3c170062  lui         $s7, 0x62
    ctx->pc = 0x2341a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
    // 0x2341ac: 0x26e3cfd0  addiu       $v1, $s7, -0x3030
    ctx->pc = 0x2341acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954960));
    // 0x2341b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2341b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2341b4: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x2341b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x2341b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2341b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2341bc: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2341bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2341c0: 0x949210a4  lhu         $s2, 0x10A4($a0)
    ctx->pc = 0x2341c0u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x2341c4: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x2341c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2341c8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2341c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2341cc: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x2341ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2341d0: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x2341d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2341d4: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2341d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2341d8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2341d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2341dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2341dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2341e0: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2341e4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2341e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2341e8: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x2341e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x2341ec: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x2341ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2341f0: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x2341f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2341f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2341f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2341f8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2341f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2341fc: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x2341fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x234200: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x234200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234204: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x234204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x234208: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x234208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23420c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x23420cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x234210: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x234210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x234214: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x234218: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x234218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23421c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x23421cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x234220: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x234220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x234224: 0x24a4cfd0  addiu       $a0, $a1, -0x3030
    ctx->pc = 0x234224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x234228: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x234228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23422c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x23422cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x234230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234234: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x234234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234238: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x234238u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x23423c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x23423cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x234240: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x234240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234244: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x234244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x234248: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x234248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23424c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x234250: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x234250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x234254: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x234254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x234258: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23425c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x23425cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x234260: 0x2485cfd0  addiu       $a1, $a0, -0x3030
    ctx->pc = 0x234260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x234264: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x234264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x234268: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x234268u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x23426c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234270: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x234270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234274: 0x94c410a4  lhu         $a0, 0x10A4($a2)
    ctx->pc = 0x234274u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4260)));
    // 0x234278: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x234278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x23427c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x23427cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x234280: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x234280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234284: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x234288: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x234288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x23428c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x23428cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x234290: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x234290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234294: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x234294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x234298: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x23429c: 0x24a4cfd0  addiu       $a0, $a1, -0x3030
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x2342a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2342a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2342a4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x2342a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2342a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2342a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2342ac: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2342acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2342b0: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x2342b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x2342b4: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x2342b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2342b8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2342b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2342bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2342bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2342c0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x2342c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2342c4: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x2342c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x2342c8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2342c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2342cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2342d0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2342d4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2342d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2342d8: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x2342d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x2342dc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2342dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2342e0: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x2342e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2342e4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2342e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2342e8: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2342e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2342ec: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2342ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2342f0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2342f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2342f4: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2342F4u;
    {
        const bool branch_taken_0x2342f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2342f4) {
            ctx->pc = 0x2343CCu;
            return;
        }
    }
    ctx->pc = 0x2342FCu;
    // 0x2342fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2342fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234300: 0x0  nop
    ctx->pc = 0x234300u;
    // NOP
    // 0x234304: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x234304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x234308: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x234308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x23430c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23430cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234310: 0x0  nop
    ctx->pc = 0x234310u;
    // NOP
    // 0x234314: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x234314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x234318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23431c: 0x0  nop
    ctx->pc = 0x23431cu;
    // NOP
    // 0x234320: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x234320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x234324: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x234324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x234328: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x234328u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23432c: 0x0  nop
    ctx->pc = 0x23432cu;
    // NOP
    // 0x234330: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x234330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x234334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234338: 0x0  nop
    ctx->pc = 0x234338u;
    // NOP
    // 0x23433c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x23433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x234340: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x234340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x234344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234348: 0x0  nop
    ctx->pc = 0x234348u;
    // NOP
    // 0x23434c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x23434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x234350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234354: 0x0  nop
    ctx->pc = 0x234354u;
    // NOP
    // 0x234358: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x234358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x23435c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x23435cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x234360: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x234360u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234364: 0x0  nop
    ctx->pc = 0x234364u;
    // NOP
    // 0x234368: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x234368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x23436c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x23436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x234370: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x234370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x234374: 0x24620880  addiu       $v0, $v1, 0x880
    ctx->pc = 0x234374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x234378: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x234378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23437c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23437cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x234380: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x234380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x234384: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x234384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x234388: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x234388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23438c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x23438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x234390: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x234390u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x234394: 0x34e40020  ori         $a0, $a3, 0x20
    ctx->pc = 0x234394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
    // 0x234398: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x234398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x23439c: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x23439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2343a0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2343a4: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2343a8: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x2343a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2343ac: 0x24470980  addiu       $a3, $v0, 0x980
    ctx->pc = 0x2343acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
    // 0x2343b0: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x2343b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2343b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2343B4u;
    SET_GPR_U32(ctx, 31, 0x2343BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2343B4u, 0x2343BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343BCu;
label_2343bc:
    // 0x2343bc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2343bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2343c0: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2343c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2343c4: 0x34958000  ori         $s5, $a0, 0x8000
    ctx->pc = 0x2343c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2343c8: 0xa4750002  sh          $s5, 0x2($v1)
    ctx->pc = 0x2343c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 21));
    ctx->pc = 0x2343ccu;
}
