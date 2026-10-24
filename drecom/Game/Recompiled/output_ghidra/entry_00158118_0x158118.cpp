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

// Function: entry_00158118
// Address: 0x158118 - 0x1583b8
void entry_00158118_0x158118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158118_0x158118");
#endif

    switch (ctx->pc) {
        case 0x15830cu: goto label_15830c;
        case 0x15831cu: goto label_15831c;
        case 0x1583a8u: goto label_1583a8;
        default: break;
    }

    ctx->pc = 0x158118u;

    // 0x158118: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x158118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15811c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15811cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x158120: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x158120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x158124: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x158124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x158128: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x158128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15812c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x15812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x158130: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x158130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x158134: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x158134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x158138: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x158138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15813c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x15813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158140: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158144: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x158144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15814c: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x15814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158150: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x158150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x158154: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x158154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158158: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15815c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158164: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x158164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158168: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x158168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15816c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x15816cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x158170: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x158170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158174: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158178: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15817c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158184: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x158184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158188: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x158188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15818c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158190: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158194: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158198: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x158198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15819c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15819cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1581a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1581a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1581a4: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x1581a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581a8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1581a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1581ac: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1581acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1581b0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1581b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1581b4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1581b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1581b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1581b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1581bc: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1581bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581c0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1581c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1581c4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1581c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1581c8: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1581c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1581cc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1581ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1581d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1581d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1581d4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1581d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1581d8: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x1581d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581dc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1581dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1581e0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1581e4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1581e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1581e8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1581e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1581ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1581ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1581f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1581f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1581f4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1581f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1581f8: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1581f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1581fc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1581fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158200: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158204: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158208: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x158208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15820c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15820cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158214: 0xc4420120  lwc1        $f2, 0x120($v0)
    ctx->pc = 0x158214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158218: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x158218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x15821c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x15821cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158220: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158224: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x158224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15822c: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x15822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158230: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x158230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x158234: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x158234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158238: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x158238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15823c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x15823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158240: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x158240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x158244: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x158244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x158248: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x158248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15824c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x15824cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x158250: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x158250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158254: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158258: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x158258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15825c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x15825cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158260: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x158260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158264: 0xc4a10160  lwc1        $f1, 0x160($a1)
    ctx->pc = 0x158264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158268: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x158268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15826c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158270: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x158270u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158274: 0x2fd2021  addu        $a0, $s7, $sp
    ctx->pc = 0x158274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
    // 0x158278: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x158278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15827c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158280: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x158280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x158284: 0xc4400160  lwc1        $f0, 0x160($v0)
    ctx->pc = 0x158284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158288: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x158288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x15828c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x15828cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158290: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158294: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x158294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15829c: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x15829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1582a0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1582a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1582a4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1582a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1582a8: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1582a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1582ac: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1582acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1582b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1582b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1582b4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1582b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1582b8: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x1582b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1582bc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1582bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1582c0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1582c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1582c4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1582c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1582c8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1582c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1582cc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1582ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1582d0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1582d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1582d4: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x1582d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1582d8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1582d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1582dc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1582dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1582e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1582e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1582e4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1582e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1582e8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1582e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1582ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1582ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1582f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1582f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1582f4: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1582f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1582f8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1582f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1582fc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1582fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x158300: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x158300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x158304: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x158304u;
    SET_GPR_U32(ctx, 31, 0x15830Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x15830Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15830Cu) { return; }
    ctx->pc = 0x15830Cu;
label_15830c:
    // 0x15830c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x158310: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x158310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x158314: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x158314u;
    SET_GPR_U32(ctx, 31, 0x15831Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x15831Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15831Cu) { return; }
    ctx->pc = 0x15831Cu;
label_15831c:
    // 0x15831c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x15831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x158320: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158324: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x158324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x158328: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x158328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15832c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x15832cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158330: 0xa604002c  sh          $a0, 0x2C($s0)
    ctx->pc = 0x158330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x158334: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x158334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x158338: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x158338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15833c: 0xa603003c  sh          $v1, 0x3C($s0)
    ctx->pc = 0x15833cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x158340: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x158344: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x158344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x158348: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x158348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x15834c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x15834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x158350: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158354: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x158354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x158358: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x158358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15835c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x15835cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x158360: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x158360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x158364: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x158364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x158368: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x158368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15836c: 0xa603003e  sh          $v1, 0x3E($s0)
    ctx->pc = 0x15836cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x158370: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x158370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x158374: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158378: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x158378u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x15837c: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x15837cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x158380: 0xae150040  sw          $s5, 0x40($s0)
    ctx->pc = 0x158380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 21));
    // 0x158384: 0xae150030  sw          $s5, 0x30($s0)
    ctx->pc = 0x158384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 21));
    // 0x158388: 0xae150020  sw          $s5, 0x20($s0)
    ctx->pc = 0x158388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 21));
    // 0x15838c: 0x268354e0  addiu       $v1, $s4, 0x54E0
    ctx->pc = 0x15838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 21728));
    // 0x158390: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x158390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x158394: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x158394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x158398: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x158398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15839c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x15839cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1583a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1583A0u;
    SET_GPR_U32(ctx, 31, 0x1583A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1583A0u, 0x1583A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583A8u;
label_1583a8:
    // 0x1583a8: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x1583a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1583ac: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1583acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1583b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1583b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1583b4: 0x0  nop
    ctx->pc = 0x1583b4u;
    // NOP
    ctx->pc = 0x1583b8u;
}
