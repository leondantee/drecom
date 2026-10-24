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

// Function: caseD_3
// Address: 0x1533a8 - 0x1535e8
void caseD_3_0x1533a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1533a8");
#endif

    ctx->pc = 0x1533a8u;

    // 0x1533a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1533a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1533ac: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x1533acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1533b0: 0xae0415c0  sw          $a0, 0x15C0($s0)
    ctx->pc = 0x1533b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 4));
    // 0x1533b4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1533b8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1533b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1533bc: 0x0  nop
    ctx->pc = 0x1533bcu;
    // NOP
    // 0x1533c0: 0xe60c15d0  swc1        $f12, 0x15D0($s0)
    ctx->pc = 0x1533c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
    // 0x1533c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1533c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1533c8: 0x0  nop
    ctx->pc = 0x1533c8u;
    // NOP
    // 0x1533cc: 0xe60115d4  swc1        $f1, 0x15D4($s0)
    ctx->pc = 0x1533ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
    // 0x1533d0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1533d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1533d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1533d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1533d8: 0x0  nop
    ctx->pc = 0x1533d8u;
    // NOP
    // 0x1533dc: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x1533dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
    // 0x1533e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1533e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1533e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1533e8: 0x0  nop
    ctx->pc = 0x1533e8u;
    // NOP
    // 0x1533ec: 0xe60c15dc  swc1        $f12, 0x15DC($s0)
    ctx->pc = 0x1533ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
    // 0x1533f0: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x1533f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1533f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1533f8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1533f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1533fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153404: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x153404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153408: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x15340c: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x15340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153410: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x153410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153414: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x153414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x153418: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
    // 0x15341c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15341cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153420: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153424: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153428: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15342c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x15342cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153430: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153434: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153438: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x153438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15343c: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x15343cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x153440: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x153440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x153444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153448: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x15344c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15344cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153450: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153454: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153458: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x15345c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153460: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153464: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x153464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x153468: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x153468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15346c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15346cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153470: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153474: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x153474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153478: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x153478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15347c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15347cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153480: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153484: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15348c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x15348cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x153490: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x153494: 0x3482e6e7  ori         $v0, $a0, 0xE6E7
    ctx->pc = 0x153494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
    // 0x153498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15349c: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x15349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1534a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1534a4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1534a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1534a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1534a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1534ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1534acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1534b0: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1534b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1534b4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1534b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1534b8: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x1534b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x1534bc: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x1534bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
    // 0x1534c0: 0x34829091  ori         $v0, $a0, 0x9091
    ctx->pc = 0x1534c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
    // 0x1534c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1534c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1534c8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1534c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1534cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1534ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1534d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1534d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1534d4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1534d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1534d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1534d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1534dc: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1534dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1534e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1534e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1534e4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x1534e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x1534e8: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1534e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x1534ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1534ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1534f0: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1534f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1534f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1534f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1534f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1534f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1534fc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1534fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153500: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153504: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153508: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15350c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x15350cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x153510: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x153510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x153514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153518: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x15351c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x15351cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153520: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153524: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153528: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x15352c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153530: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153534: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x153534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x153538: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
    // 0x15353c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15353cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153540: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153544: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153548: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x153548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15354c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153550: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x153550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x153554: 0x2444bd00  addiu       $a0, $v0, -0x4300
    ctx->pc = 0x153554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x153558: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15355c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x15355cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x153560: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153568: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x15356c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153570: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x153570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153574: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x153574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x153578: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x15357c: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x15357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153580: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x153580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x153584: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x153584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x153588: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x153588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x15358c: 0x3444e6e7  ori         $a0, $v0, 0xE6E7
    ctx->pc = 0x15358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59111);
    // 0x153590: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153594: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153598: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15359c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1535a0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1535a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1535a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1535a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1535a8: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1535a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1535ac: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1535acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1535b0: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1535b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1535b4: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x1535b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
    // 0x1535b8: 0x34449091  ori         $a0, $v0, 0x9091
    ctx->pc = 0x1535b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
    // 0x1535bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1535bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1535c0: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x1535c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1535c4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1535c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1535c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1535c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1535cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1535ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1535d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1535d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1535d4: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x1535d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1535d8: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1535d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1535dc: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x1535dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x1535e0: 0x100003a1  b           . + 4 + (0x3A1 << 2)
    ctx->pc = 0x1535E0u;
    {
        const bool branch_taken_0x1535e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535e0) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x1535E8u;
}
