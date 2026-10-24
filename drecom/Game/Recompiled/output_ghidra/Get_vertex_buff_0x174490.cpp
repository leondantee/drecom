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

// Function: Get_vertex_buff
// Address: 0x174490 - 0x174638
void Get_vertex_buff_0x174490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_vertex_buff_0x174490");
#endif

    switch (ctx->pc) {
        case 0x174510u: goto label_174510;
        case 0x17451cu: goto label_17451c;
        case 0x174530u: goto label_174530;
        case 0x174578u: goto label_174578;
        default: break;
    }

    ctx->pc = 0x174490u;

    // 0x174490: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x174494: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x174494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x174498: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x174498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17449c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1744a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1744a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1744a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1744a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1744a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1744a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1744ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1744acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1744b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1744b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1744b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1744b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1744b8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1744b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1744bc: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1744bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x1744c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1744c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1744c4: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x1744c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1744c8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1744c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1744cc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1744ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1744d0: 0x8c7e0058  lw          $fp, 0x58($v1)
    ctx->pc = 0x1744d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1744d4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1744d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1744d8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1744d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1744dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1744e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1744e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1744e4: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x1744e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1744e8: 0x8fd50034  lw          $s5, 0x34($fp)
    ctx->pc = 0x1744e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1744ec: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1744ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1744f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1744f4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1744f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1744f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1744f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1744fc: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1744fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x174500: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x174500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174504: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x174504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x174508: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x174508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17450c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x17450cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_174510:
    // 0x174510: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x174510u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174514: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x174514u;
    {
        const bool branch_taken_0x174514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174514) {
            ctx->pc = 0x1745D8u;
            goto label_1745d8;
        }
    }
    ctx->pc = 0x17451Cu;
label_17451c:
    // 0x17451c: 0x8eb300a8  lw          $s3, 0xA8($s5)
    ctx->pc = 0x17451cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x174520: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x174520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x174524: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x174524u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x174528: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x174528u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x17452c: 0x0  nop
    ctx->pc = 0x17452cu;
    // NOP
label_174530:
    // 0x174530: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x174530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174534: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x174534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174538: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x174538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17453c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x17453cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x174540: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x174540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x174544: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x174544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x174548: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x174548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17454c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x17454cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x174550: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x174550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x174554: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x174554u;
    {
        const bool branch_taken_0x174554 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x174554) {
            ctx->pc = 0x174530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174530;
        }
    }
    ctx->pc = 0x17455Cu;
    // 0x17455c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x174560: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x174560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x174564: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x174564u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x174568: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x174568u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17456c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x17456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x174570: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x174570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x174574: 0xac720028  sw          $s2, 0x28($v1)
    ctx->pc = 0x174574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 18));
label_174578:
    // 0x174578: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x174578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x17457c: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x17457cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x174580: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x174580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x174584: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x174584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x174588: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x174588u;
    {
        const bool branch_taken_0x174588 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x174588) {
            ctx->pc = 0x174578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174578;
        }
    }
    ctx->pc = 0x174590u;
    // 0x174590: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x174590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x174594: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x174594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x174598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17459c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x17459cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1745a0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1745a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1745a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1745a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1745a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1745ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1745acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1745b0: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1745b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1745b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1745b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1745b8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1745b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1745bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1745bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1745c0: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1745c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1745c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1745c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1745c8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1745cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1745ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1745d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1745d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1745d4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1745d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1745d8:
    // 0x1745d8: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1745d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1745dc: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1745DCu;
    {
        const bool branch_taken_0x1745dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1745dc) {
            ctx->pc = 0x17451Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17451c;
        }
    }
    ctx->pc = 0x1745E4u;
    // 0x1745e4: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1745e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1745e8: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1745e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1745ec: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1745ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1745f0: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1745f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1745f4: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1745f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1745f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1745f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1745fc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1745fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x174600: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x174600u;
    {
        const bool branch_taken_0x174600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174600) {
            ctx->pc = 0x174510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174510;
        }
    }
    ctx->pc = 0x174608u;
    // 0x174608: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x174608u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17460c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17460cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174610: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x174610u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174614: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x174614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174618: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17461c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17461cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17462c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x17462cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x174630: 0x3e00008  jr          $ra
    ctx->pc = 0x174630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174638u;
}
