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

// Function: Efm_get_normal_buff
// Address: 0x1df110 - 0x1df320
void Efm_get_normal_buff_0x1df110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_get_normal_buff_0x1df110");
#endif

    switch (ctx->pc) {
        case 0x1df180u: goto label_1df180;
        case 0x1df18cu: goto label_1df18c;
        case 0x1df1a0u: goto label_1df1a0;
        case 0x1df238u: goto label_1df238;
        default: break;
    }

    ctx->pc = 0x1df110u;

    // 0x1df110: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1df114: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1df114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1df118: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1df118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1df11c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1df11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1df120: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1df120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1df124: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1df124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1df128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1df128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1df12c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df138: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1df138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1df13c: 0xa3a500a8  sb          $a1, 0xA8($sp)
    ctx->pc = 0x1df13cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df140: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1df140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1df144: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x1df144u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1df148: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1df148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1df14c: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df150: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1df154: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df158: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1df15c: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df160: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df160u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1df164: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df168: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df16c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df16cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df170: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1df170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df174: 0x8c7e0058  lw          $fp, 0x58($v1)
    ctx->pc = 0x1df174u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1df178: 0x8fd50034  lw          $s5, 0x34($fp)
    ctx->pc = 0x1df178u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1df17c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1df17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1df180:
    // 0x1df180: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1df180u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df184: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1DF184u;
    {
        const bool branch_taken_0x1df184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df184) {
            ctx->pc = 0x1DF298u;
            goto label_1df298;
        }
    }
    ctx->pc = 0x1DF18Cu;
label_1df18c:
    // 0x1df18c: 0x8eb300ac  lw          $s3, 0xAC($s5)
    ctx->pc = 0x1df18cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x1df190: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1df190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1df194: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1df194u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1df198: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1df198u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df19c: 0x0  nop
    ctx->pc = 0x1df19cu;
    // NOP
label_1df1a0:
    // 0x1df1a0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1df1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df1a4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1df1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df1a8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1df1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df1ac: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1df1acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1df1b0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1df1b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1df1b4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1df1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1df1b8: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x1df1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df1bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df1c0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1df1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1df1c4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF1C4u;
    {
        const bool branch_taken_0x1df1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df1c4) {
            ctx->pc = 0x1DF208u;
            goto label_1df208;
        }
    }
    ctx->pc = 0x1DF1CCu;
    // 0x1df1cc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1df1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1df1d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1df1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df1d4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1df1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df1d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df1dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1df1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1df1e0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1df1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1df1e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1df1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df1e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1df1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df1ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df1f0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1df1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1df1f4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1df1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1df1f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1df1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df1fc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1df1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df200: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df204: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1df204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1df208:
    // 0x1df208: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1df208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1df20c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1df20cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1df210: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df214: 0x1620ffe2  bnez        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1DF214u;
    {
        const bool branch_taken_0x1df214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df214) {
            ctx->pc = 0x1DF1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df1a0;
        }
    }
    ctx->pc = 0x1DF21Cu;
    // 0x1df21c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df220: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df224: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df224u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df228: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df22c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df230: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df234: 0xac720030  sw          $s2, 0x30($v1)
    ctx->pc = 0x1df234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 18));
label_1df238:
    // 0x1df238: 0xae920054  sw          $s2, 0x54($s4)
    ctx->pc = 0x1df238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 18));
    // 0x1df23c: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1df23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1df240: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1df240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1df244: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df248: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF248u;
    {
        const bool branch_taken_0x1df248 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df248) {
            ctx->pc = 0x1DF238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df238;
        }
    }
    ctx->pc = 0x1DF250u;
    // 0x1df250: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1df250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df254: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1df254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1df258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1df258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1df25c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1df25cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df260: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df264: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df268: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df26c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df270: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df274: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df278: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df27c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df280: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df284: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df288: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df28c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df290: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df294: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1df294u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1df298:
    // 0x1df298: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df298u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df29c: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1DF29Cu;
    {
        const bool branch_taken_0x1df29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df29c) {
            ctx->pc = 0x1DF18Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df18c;
        }
    }
    ctx->pc = 0x1DF2A4u;
    // 0x1df2a4: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df2a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df2a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df2ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df2b0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df2b4: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df2b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df2b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df2bc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df2bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df2c0: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1DF2C0u;
    {
        const bool branch_taken_0x1df2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df2c0) {
            ctx->pc = 0x1DF180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df180;
        }
    }
    ctx->pc = 0x1DF2C8u;
    // 0x1df2c8: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df2c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df2cc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df2d0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df2d4: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df2d8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1df2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1df2dc: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df2dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df2e0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df2e4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df2e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df2e8: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1DF2E8u;
    {
        const bool branch_taken_0x1df2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df2e8) {
            ctx->pc = 0x1DF180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df180;
        }
    }
    ctx->pc = 0x1DF2F0u;
    // 0x1df2f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df2f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df2f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df2f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df2f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df2f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df2fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df2fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df300: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df314: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df318: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF320u;
}
