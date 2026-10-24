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

// Function: entry_0030a49c
// Address: 0x30a49c - 0x30a5b8
void entry_0030a49c_0x30a49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a49c_0x30a49c");
#endif

    switch (ctx->pc) {
        case 0x30a4bcu: goto label_30a4bc;
        default: break;
    }

    ctx->pc = 0x30a49cu;

    // 0x30a49c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a4a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a4a4: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30a4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a4ac: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a4b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a4b4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x30A4B4u;
    SET_GPR_U32(ctx, 31, 0x30A4BCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x30A4B4u, 0x30A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4BCu;
label_30a4bc:
    // 0x30a4bc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a4c0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a4c4: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x30a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x30a4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a4cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30a4d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30a4d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a4d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30a4dc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a4e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x30a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30a4e4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x30a4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a4ec: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x30a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30a4f0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x30a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a4f4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30a4f8: 0x248392e0  addiu       $v1, $a0, -0x6D20
    ctx->pc = 0x30a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
    // 0x30a4fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a500: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30a500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30a504: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x30a504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30a508: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x30a508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30a50c: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x30a50cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30a510: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x30a510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a514: 0x8d030058  lw          $v1, 0x58($t0)
    ctx->pc = 0x30a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x30a518: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x30a518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x30a51c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x30a51cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a520: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30a520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a524: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a528: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x30a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x30a52c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a530: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30a530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a534: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x30a534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30a538: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a53c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x30a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a544: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x30a544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30a548: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a54c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30a550: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x30a550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a554: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x30a554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x30a558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30a558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a55c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x30a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x30a560: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a564: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30a568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a56c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x30a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x30a570: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x30a570u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30a574: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x30a574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x30a578: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30a578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a57c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x30a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x30a580: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30a580u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a584: 0x0  nop
    ctx->pc = 0x30a584u;
    // NOP
    // 0x30a588: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30a588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30a58c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30a590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a594: 0x0  nop
    ctx->pc = 0x30a594u;
    // NOP
    // 0x30a598: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30a598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30a59c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x30a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x30a5a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30a5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30a5a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a5a8: 0x0  nop
    ctx->pc = 0x30a5a8u;
    // NOP
    // 0x30a5ac: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30a5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30a5b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30a5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30a5b4: 0x0  nop
    ctx->pc = 0x30a5b4u;
    // NOP
    ctx->pc = 0x30a5b8u;
}
