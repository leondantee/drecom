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

// Function: entry_001a91d0
// Address: 0x1a91d0 - 0x1a92f0
void entry_001a91d0_0x1a91d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a91d0_0x1a91d0");
#endif

    switch (ctx->pc) {
        case 0x1a92ecu: goto label_1a92ec;
        default: break;
    }

    ctx->pc = 0x1a91d0u;

    // 0x1a91d0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a91d4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1a91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1a91d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a91dc: 0x244200f6  addiu       $v0, $v0, 0xF6
    ctx->pc = 0x1a91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 246));
    // 0x1a91e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a91e4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a91e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a91ec: 0x34438580  ori         $v1, $v0, 0x8580
    ctx->pc = 0x1a91ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34176);
    // 0x1a91f0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a91f4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a91f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a91fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9200: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a9200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a9204: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a9204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9208: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x1a9208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a920c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a920cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a9210: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a9210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a9214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9218: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a921c: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x1a921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1a9220: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a9220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9224: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a9224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a9228: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a9228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a922c: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1a922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a9230: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a9230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9238: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a9238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a923c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a9240: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a9240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a9244: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x1a9244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x1a9248: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1a9248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a924c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1a924cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1a9250: 0x0  nop
    ctx->pc = 0x1a9250u;
    // NOP
    // 0x1a9254: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9254u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a9258: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a9258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a925c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1a925cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1a9260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9264: 0x24420158  addiu       $v0, $v0, 0x158
    ctx->pc = 0x1a9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x1a9268: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a9268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a926c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a9270: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a9270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a9274: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a9274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a9278: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1a9278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1a927c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a9280: 0x244200fe  addiu       $v0, $v0, 0xFE
    ctx->pc = 0x1a9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 254));
    // 0x1a9284: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a9284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a9288: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a928c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a928cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a9290: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9294: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a9294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a9298: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a9298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a929c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a929cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a92a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a92a4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1a92a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a92ac: 0x3414fffb  ori         $s4, $zero, 0xFFFB
    ctx->pc = 0x1a92acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a92b0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a92b4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a92b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a92bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a92c0: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1a92c4: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1a92c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1a92c8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a92cc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a92d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a92d4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1a92d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a92d8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a92dc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a92e0: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x1a92e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1a92e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A92E4u;
    SET_GPR_U32(ctx, 31, 0x1A92ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A92E4u, 0x1A92ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A92ECu;
label_1a92ec:
    // 0x1a92ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a92ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1a92f0u;
}
