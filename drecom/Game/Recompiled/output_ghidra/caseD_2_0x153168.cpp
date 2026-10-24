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

// Function: caseD_2
// Address: 0x153168 - 0x1533a8
void caseD_2_0x153168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x153168");
#endif

    ctx->pc = 0x153168u;

    // 0x153168: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x153168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15316c: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x15316cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x153170: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x153170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
    // 0x153174: 0x3c054307  lui         $a1, 0x4307
    ctx->pc = 0x153174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17159 << 16));
    // 0x153178: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x153178u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15317c: 0x0  nop
    ctx->pc = 0x15317cu;
    // NOP
    // 0x153180: 0xe60115d0  swc1        $f1, 0x15D0($s0)
    ctx->pc = 0x153180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
    // 0x153184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153188: 0x0  nop
    ctx->pc = 0x153188u;
    // NOP
    // 0x15318c: 0xe60015d4  swc1        $f0, 0x15D4($s0)
    ctx->pc = 0x15318cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
    // 0x153190: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x153194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153198: 0x0  nop
    ctx->pc = 0x153198u;
    // NOP
    // 0x15319c: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x15319cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
    // 0x1531a0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1531a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1531a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1531a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1531a8: 0x0  nop
    ctx->pc = 0x1531a8u;
    // NOP
    // 0x1531ac: 0xe60115dc  swc1        $f1, 0x15DC($s0)
    ctx->pc = 0x1531acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
    // 0x1531b0: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x1531b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x1531b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1531b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1531b8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1531b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1531bc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1531bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1531c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1531c4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1531c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1531c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1531c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1531cc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1531ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1531d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1531d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1531d4: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1531d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1531d8: 0x3c054366  lui         $a1, 0x4366
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17254 << 16));
    // 0x1531dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1531dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1531e0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1531e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1531e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1531e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1531e8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1531e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1531ec: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1531ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1531f0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1531f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1531f4: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x1531f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1531f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1531f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1531fc: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x1531fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x153200: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x153200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
    // 0x153204: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x153204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153208: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x15320c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x15320cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153210: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153214: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153218: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x15321c: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x15321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153220: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153224: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x153224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x153228: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15322c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15322cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153230: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153234: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153238: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15323c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153240: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153244: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153248: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15324c: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x15324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x153250: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x153250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x153254: 0x3465e6e7  ori         $a1, $v1, 0xE6E7
    ctx->pc = 0x153254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59111);
    // 0x153258: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153258u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15325c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153260: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153264: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153268: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15326c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15326cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153270: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153274: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x153274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153278: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x153278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x15327c: 0x3c053f10  lui         $a1, 0x3F10
    ctx->pc = 0x15327cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16144 << 16));
    // 0x153280: 0x34a49091  ori         $a0, $a1, 0x9091
    ctx->pc = 0x153280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37009);
    // 0x153284: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x153284u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153288: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x15328c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15328cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153290: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153294: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153298: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x15329c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1532a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1532a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1532a4: 0xe4610088  swc1        $f1, 0x88($v1)
    ctx->pc = 0x1532a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x1532a8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
    // 0x1532ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1532acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1532b0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1532b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1532b4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1532b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1532b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1532b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1532bc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1532bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1532c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1532c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1532c4: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x1532c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1532c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1532c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1532cc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1532ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1532d0: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x1532d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x1532d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1532d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1532d8: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x1532d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1532dc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1532dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1532e0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1532e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1532e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1532e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1532e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1532ec: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1532f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1532f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1532f4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1532f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x1532f8: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x1532f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
    // 0x1532fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1532fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x153300: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153304: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153308: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x153308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15330c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x15330cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153310: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153314: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153318: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x153318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15331c: 0xe48c0078  swc1        $f12, 0x78($a0)
    ctx->pc = 0x15331cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x153320: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x153324: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x153324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153328: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x15332c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15332cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153330: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x153330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153334: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153338: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x15333c: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x15333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153340: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x153344: 0xe4810080  swc1        $f1, 0x80($a0)
    ctx->pc = 0x153344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x153348: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x153348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x15334c: 0x3443e6e7  ori         $v1, $v0, 0xE6E7
    ctx->pc = 0x15334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59111);
    // 0x153350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153354: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153358: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x153358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15335c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x153360: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x153360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153364: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153368: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x153368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x15336c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153370: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x153370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x153374: 0x3c033f10  lui         $v1, 0x3F10
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16144 << 16));
    // 0x153378: 0x34639091  ori         $v1, $v1, 0x9091
    ctx->pc = 0x153378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37009);
    // 0x15337c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x15337cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x153380: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153384: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153388: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15338c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x15338cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153390: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x153390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x153394: 0x24c5bd00  addiu       $a1, $a2, -0x4300
    ctx->pc = 0x153394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x153398: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x153398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15339c: 0xe46c0088  swc1        $f12, 0x88($v1)
    ctx->pc = 0x15339cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x1533a0: 0x10000431  b           . + 4 + (0x431 << 2)
    ctx->pc = 0x1533A0u;
    {
        const bool branch_taken_0x1533a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533a0) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x1533A8u;
}
