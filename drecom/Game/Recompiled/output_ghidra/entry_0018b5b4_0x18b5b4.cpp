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

// Function: entry_0018b5b4
// Address: 0x18b5b4 - 0x18b688
void entry_0018b5b4_0x18b5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b5b4_0x18b5b4");
#endif

    ctx->pc = 0x18b5b4u;

    // 0x18b5b4: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x18b5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b5b8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b5bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b5c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b5c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b5c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b5d0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x18b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x18b5d4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x18b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b5d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b5dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b5e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b5e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b5e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b5ec: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x18b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x18b5f0: 0x92440008  lbu         $a0, 0x8($s2)
    ctx->pc = 0x18b5f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18b5f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b5f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b5fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b600: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b608: 0xa0440018  sb          $a0, 0x18($v0)
    ctx->pc = 0x18b608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b60c: 0x92440009  lbu         $a0, 0x9($s2)
    ctx->pc = 0x18b60cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x18b610: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b614: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b618: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b61c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b624: 0xa0440019  sb          $a0, 0x19($v0)
    ctx->pc = 0x18b624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b628: 0x9244000a  lbu         $a0, 0xA($s2)
    ctx->pc = 0x18b628u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x18b62c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b630: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b634: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b638: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b63c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b640: 0xa044001a  sb          $a0, 0x1A($v0)
    ctx->pc = 0x18b640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b644: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18b644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b648: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18b64c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x18b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x18b650: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b654: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x18b654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18b658: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b65c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b660: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b668: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x18b668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x18b66c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x18b66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18b670: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b674: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18b674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18b678: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b67c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b680: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x18b680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x18b684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x18b688u;
}
